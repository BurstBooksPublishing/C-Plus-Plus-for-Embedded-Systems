void enter_sleep_mode() {
SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;
__WFI();
}