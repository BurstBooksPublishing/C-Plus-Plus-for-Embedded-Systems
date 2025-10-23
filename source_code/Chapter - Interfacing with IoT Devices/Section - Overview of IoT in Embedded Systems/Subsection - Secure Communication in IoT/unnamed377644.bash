# Generate EC certificate
openssl ecparam -name prime256v1 -genkey -noout -out mqtt.key
openssl req -new -x509 -key mqtt.key -out mqtt.crt -days 365