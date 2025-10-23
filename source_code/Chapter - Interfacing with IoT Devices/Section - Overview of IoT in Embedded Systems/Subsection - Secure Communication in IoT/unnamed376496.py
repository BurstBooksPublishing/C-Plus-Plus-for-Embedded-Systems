from Crypto.Cipher import AES
from Crypto.Random import get_random_bytes
import hmac, hashlib
# Generate master key
K_master = get_random_bytes(32)  # AES-256