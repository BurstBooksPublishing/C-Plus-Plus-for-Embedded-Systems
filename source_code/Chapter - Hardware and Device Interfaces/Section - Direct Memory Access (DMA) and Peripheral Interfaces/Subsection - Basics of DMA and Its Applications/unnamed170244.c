typedef struct {
    uint32_t SRC_ADDR;
    uint32_t DEST_ADDR;
    uint32_t CTRL;
    uint32_t NEXT;
} DMA_Descriptor;

DMA_Descriptor desc[3] = {
    {header_addr, dest_addr, (14 << 16) | DMA_CTRL_ENABLE, &desc[1]},
    {payload_addr, dest_addr+14, (1500 << 16) | DMA_CTRL_ENABLE, &desc[2]},
    {crc_addr, dest_addr+1514, (4 << 16) | DMA_CTRL_ENABLE | DMA_CTRL_TCIE, 0}
};