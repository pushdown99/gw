#ifndef KAA_RSA_KEYS_H_
#define KAA_RSA_KEYS_H_


#define KAA_RSA_PUBLIC_KEY_LENGTH  294
#define KAA_RSA_PRIVATE_KEY_LENGTH 1192


uint8_t KAA_RSA_PUBLIC_KEY[] = { 0x30, 0x82, 0x01, 0x22, 0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0F, 0x00, 0x30, 0x82, 0x01, 0x0A, 0x02, 0x82, 0x01, 0x01, 0x00, 0xB7, 0x72, 0x77, 0x27, 0x13, 0x84, 0x4C, 0xD7, 0xBB, 0x2F, 0xD5, 0x5D, 0xB7, 0xA1, 0x3B, 0x82, 0x32, 0x4F, 0xEB, 0x27, 0x7B, 0xA8, 0xBE, 0xB4, 0xE7, 0xCA, 0x8F, 0x64, 0xC9, 0x09, 0xCC, 0x25, 0xBC, 0x77, 0x8C, 0x2D, 0x13, 0xFE, 0x0E, 0x16, 0x30, 0x5D, 0x90, 0x3D, 0x2A, 0xA2, 0xB7, 0x4D, 0x97, 0x46, 0xDD, 0x6B, 0x30, 0x6E, 0x89, 0xED, 0x84, 0x6B, 0x5A, 0x8A, 0x5E, 0xFC, 0x65, 0xCC, 0x90, 0xFC, 0xB6, 0x9F, 0xE8, 0x4F, 0x65, 0x48, 0x5F, 0x01, 0xC5, 0xAD, 0x14, 0x90, 0x79, 0xBF, 0xC8, 0x4E, 0x81, 0x0B, 0xE1, 0xC9, 0xA4, 0x6B, 0x94, 0xA0, 0x7D, 0x85, 0xCC, 0xFF, 0x17, 0xE8, 0x22, 0x5C, 0xE6, 0x29, 0x72, 0x9A, 0x31, 0x10, 0x5E, 0x73, 0x58, 0x0F, 0x3F, 0x41, 0x08, 0xD2, 0xD4, 0xB2, 0xC2, 0xAB, 0xDF, 0xFB, 0x46, 0xDD, 0xDA, 0x47, 0x8D, 0x4A, 0x8B, 0x41, 0x7D, 0x80, 0xBA, 0x40, 0x0F, 0xC3, 0xCF, 0xA8, 0xD0, 0x95, 0xC8, 0x9D, 0xB7, 0xF0, 0x99, 0x54, 0x09, 0xB4, 0x3E, 0x47, 0xF5, 0xB6, 0x5D, 0xFF, 0xC0, 0x9E, 0x9F, 0xAA, 0x4C, 0x09, 0xF7, 0x60, 0xD1, 0x86, 0x25, 0xF8, 0x32, 0xBC, 0xD0, 0xD1, 0x34, 0xCB, 0xCD, 0xA2, 0x8A, 0xD6, 0x77, 0x67, 0xDB, 0x68, 0x51, 0xFC, 0x3E, 0x43, 0x38, 0x5B, 0x8A, 0x21, 0x90, 0xBE, 0x6E, 0xB2, 0xA9, 0xFC, 0x42, 0x4A, 0x4B, 0xE5, 0xCA, 0x20, 0x95, 0xF5, 0x04, 0x71, 0xB3, 0x4F, 0xD0, 0xE1, 0xBA, 0x89, 0x61, 0xDE, 0xC5, 0xE1, 0x08, 0x96, 0x98, 0x70, 0xAE, 0x30, 0x9D, 0x6B, 0x2C, 0x5E, 0x8E, 0xC6, 0x76, 0x31, 0x08, 0x22, 0x39, 0x23, 0xC1, 0xEA, 0x26, 0xD3, 0x94, 0xA7, 0xF5, 0xFF, 0xC9, 0x2C, 0xC9, 0x2C, 0xB4, 0xED, 0x0B, 0xD7, 0xE1, 0xC2, 0x40, 0x68, 0x9F, 0x01, 0x5F, 0x91, 0x16, 0xC5, 0x91, 0x37, 0x02, 0x03, 0x01, 0x00, 0x01,  };

uint8_t KAA_RSA_PRIVATE_KEY[] = { 0x30, 0x82, 0x04, 0xA4, 0x02, 0x01, 0x00, 0x02, 0x82, 0x01, 0x01, 0x00, 0xB7, 0x72, 0x77, 0x27, 0x13, 0x84, 0x4C, 0xD7, 0xBB, 0x2F, 0xD5, 0x5D, 0xB7, 0xA1, 0x3B, 0x82, 0x32, 0x4F, 0xEB, 0x27, 0x7B, 0xA8, 0xBE, 0xB4, 0xE7, 0xCA, 0x8F, 0x64, 0xC9, 0x09, 0xCC, 0x25, 0xBC, 0x77, 0x8C, 0x2D, 0x13, 0xFE, 0x0E, 0x16, 0x30, 0x5D, 0x90, 0x3D, 0x2A, 0xA2, 0xB7, 0x4D, 0x97, 0x46, 0xDD, 0x6B, 0x30, 0x6E, 0x89, 0xED, 0x84, 0x6B, 0x5A, 0x8A, 0x5E, 0xFC, 0x65, 0xCC, 0x90, 0xFC, 0xB6, 0x9F, 0xE8, 0x4F, 0x65, 0x48, 0x5F, 0x01, 0xC5, 0xAD, 0x14, 0x90, 0x79, 0xBF, 0xC8, 0x4E, 0x81, 0x0B, 0xE1, 0xC9, 0xA4, 0x6B, 0x94, 0xA0, 0x7D, 0x85, 0xCC, 0xFF, 0x17, 0xE8, 0x22, 0x5C, 0xE6, 0x29, 0x72, 0x9A, 0x31, 0x10, 0x5E, 0x73, 0x58, 0x0F, 0x3F, 0x41, 0x08, 0xD2, 0xD4, 0xB2, 0xC2, 0xAB, 0xDF, 0xFB, 0x46, 0xDD, 0xDA, 0x47, 0x8D, 0x4A, 0x8B, 0x41, 0x7D, 0x80, 0xBA, 0x40, 0x0F, 0xC3, 0xCF, 0xA8, 0xD0, 0x95, 0xC8, 0x9D, 0xB7, 0xF0, 0x99, 0x54, 0x09, 0xB4, 0x3E, 0x47, 0xF5, 0xB6, 0x5D, 0xFF, 0xC0, 0x9E, 0x9F, 0xAA, 0x4C, 0x09, 0xF7, 0x60, 0xD1, 0x86, 0x25, 0xF8, 0x32, 0xBC, 0xD0, 0xD1, 0x34, 0xCB, 0xCD, 0xA2, 0x8A, 0xD6, 0x77, 0x67, 0xDB, 0x68, 0x51, 0xFC, 0x3E, 0x43, 0x38, 0x5B, 0x8A, 0x21, 0x90, 0xBE, 0x6E, 0xB2, 0xA9, 0xFC, 0x42, 0x4A, 0x4B, 0xE5, 0xCA, 0x20, 0x95, 0xF5, 0x04, 0x71, 0xB3, 0x4F, 0xD0, 0xE1, 0xBA, 0x89, 0x61, 0xDE, 0xC5, 0xE1, 0x08, 0x96, 0x98, 0x70, 0xAE, 0x30, 0x9D, 0x6B, 0x2C, 0x5E, 0x8E, 0xC6, 0x76, 0x31, 0x08, 0x22, 0x39, 0x23, 0xC1, 0xEA, 0x26, 0xD3, 0x94, 0xA7, 0xF5, 0xFF, 0xC9, 0x2C, 0xC9, 0x2C, 0xB4, 0xED, 0x0B, 0xD7, 0xE1, 0xC2, 0x40, 0x68, 0x9F, 0x01, 0x5F, 0x91, 0x16, 0xC5, 0x91, 0x37, 0x02, 0x03, 0x01, 0x00, 0x01, 0x02, 0x82, 0x01, 0x00, 0x60, 0x2A, 0xCD, 0x73, 0xDA, 0xB3, 0x5C, 0x65, 0x2B, 0x67, 0xE3, 0xFE, 0x81, 0x29, 0x30, 0xBD, 0x0C, 0x0B, 0x01, 0x47, 0x6D, 0x78, 0x04, 0xA1, 0x69, 0x71, 0xB2, 0xC2, 0x2E, 0xF1, 0xC7, 0xE7, 0x70, 0x69, 0x6B, 0x3E, 0xA6, 0x60, 0x64, 0x9A, 0x15, 0x38, 0xB7, 0x48, 0x99, 0x75, 0x3B, 0x8A, 0x9D, 0x67, 0x34, 0xE3, 0xE0, 0x3B, 0xD2, 0x6A, 0x85, 0x24, 0x92, 0x0E, 0x3F, 0xC5, 0x28, 0xC8, 0x98, 0xA9, 0x22, 0x43, 0xA9, 0xD1, 0x15, 0x53, 0x5F, 0x1A, 0xDA, 0xB9, 0xE5, 0x31, 0xE7, 0xE1, 0x35, 0xEC, 0x91, 0x91, 0xDD, 0x07, 0x8B, 0xFE, 0x29, 0xA8, 0x08, 0xA5, 0x7F, 0xD5, 0xAA, 0x7E, 0xB2, 0xA4, 0xE8, 0xB3, 0x89, 0xB4, 0x73, 0x4C, 0x15, 0x77, 0x7A, 0x0E, 0x64, 0x26, 0x7F, 0xAD, 0xA6, 0x7B, 0x1F, 0xBA, 0x62, 0x6C, 0xA3, 0xB5, 0xE1, 0x9B, 0xE8, 0xE1, 0xCF, 0x26, 0xC1, 0xD7, 0x39, 0xF2, 0x99, 0x5A, 0x24, 0x49, 0xFD, 0x6D, 0xDC, 0xE1, 0xDA, 0x7B, 0x6B, 0x4A, 0xE0, 0x25, 0xDD, 0xF3, 0x52, 0x5D, 0x48, 0x90, 0xEE, 0x9B, 0xB4, 0xC3, 0x15, 0xE8, 0x9D, 0xD5, 0x11, 0x16, 0x7C, 0xF4, 0xA7, 0xF0, 0xC9, 0xCD, 0x08, 0xB1, 0x9D, 0x9D, 0x57, 0xFF, 0xE4, 0xEE, 0x4D, 0x01, 0x97, 0x9A, 0x03, 0x97, 0xF4, 0xAB, 0x73, 0xCA, 0x83, 0xDF, 0x4B, 0x9C, 0xBA, 0xB4, 0x0D, 0x8B, 0xD0, 0xDA, 0x1E, 0x7B, 0x68, 0xFE, 0x47, 0x32, 0x38, 0xB5, 0x28, 0x10, 0x00, 0xD1, 0xD5, 0xFA, 0x8E, 0xD2, 0x81, 0xB0, 0x52, 0x63, 0x69, 0xCB, 0xB6, 0x0B, 0x47, 0xF5, 0x79, 0xC9, 0xA7, 0x56, 0x31, 0x75, 0xA3, 0x60, 0x3E, 0x82, 0x4A, 0xF1, 0x1F, 0x24, 0xE6, 0x36, 0xB3, 0x23, 0x89, 0xB0, 0x9C, 0x8D, 0xBA, 0x38, 0x47, 0x48, 0x5F, 0xEF, 0xB1, 0xF7, 0x0A, 0x6F, 0x15, 0x5E, 0x83, 0xC1, 0x02, 0x81, 0x81, 0x00, 0xE9, 0x96, 0x6B, 0x30, 0x34, 0x2C, 0x08, 0xA6, 0xD5, 0xF0, 0x9F, 0x81, 0xDA, 0xB3, 0x30, 0x60, 0x8E, 0x33, 0x32, 0x1F, 0x07, 0x0C, 0x74, 0xF4, 0x3F, 0x8C, 0xE6, 0xEC, 0xD4, 0x95, 0x39, 0x81, 0xCB, 0x28, 0x3F, 0x48, 0xC8, 0x3C, 0x5D, 0x21, 0x88, 0x0E, 0x57, 0x28, 0xCE, 0x34, 0x8B, 0x60, 0xA9, 0xFE, 0x5C, 0xB3, 0xFB, 0xB7, 0x4D, 0x94, 0x24, 0x2C, 0x12, 0x22, 0x56, 0xC2, 0x78, 0xC8, 0x0B, 0x43, 0x3A, 0xD3, 0x35, 0x8A, 0x45, 0x8F, 0xD9, 0x85, 0x76, 0xE7, 0x0C, 0x4D, 0x26, 0xE8, 0xCF, 0x51, 0x6A, 0x07, 0x00, 0xC1, 0x93, 0xF0, 0xA5, 0xA6, 0x3E, 0x3F, 0x77, 0xEE, 0x41, 0xBC, 0x43, 0x35, 0xC5, 0x25, 0x8A, 0xEB, 0xB0, 0x92, 0x70, 0x9D, 0x1C, 0xFE, 0x0F, 0xCA, 0x2D, 0x09, 0xBB, 0xA3, 0xD3, 0x83, 0x87, 0x7F, 0xA4, 0x1D, 0x1E, 0x93, 0xE8, 0x16, 0xC7, 0x69, 0x93, 0x29, 0x02, 0x81, 0x81, 0x00, 0xC9, 0x0C, 0x74, 0x1B, 0x72, 0xEB, 0xCB, 0x3E, 0x2F, 0x08, 0xD7, 0x7A, 0x0E, 0xBA, 0x84, 0x04, 0x91, 0x76, 0x41, 0x74, 0x9F, 0xC7, 0x56, 0xA8, 0xB6, 0x06, 0x01, 0xEC, 0x50, 0xFB, 0x3B, 0x2D, 0x0D, 0xCD, 0x15, 0x3D, 0xF4, 0x08, 0x24, 0x3E, 0xE5, 0x1B, 0x26, 0x41, 0xB2, 0xC0, 0x6D, 0x72, 0xE4, 0x61, 0x77, 0xAC, 0xEB, 0xD7, 0xD3, 0x97, 0xA6, 0x61, 0x8B, 0x3D, 0x35, 0xBE, 0x00, 0xB5, 0xAD, 0xD4, 0x03, 0x1D, 0x83, 0x46, 0xE3, 0x5C, 0x4A, 0xEF, 0xDE, 0xF6, 0x87, 0xF3, 0x83, 0x81, 0x2D, 0xD0, 0x06, 0x80, 0x6B, 0xC0, 0xA8, 0x19, 0xE0, 0xA5, 0xCC, 0x58, 0x99, 0xD8, 0xB4, 0x06, 0x6C, 0x50, 0x1D, 0xDE, 0xE7, 0xA9, 0x98, 0x3C, 0xB6, 0xCA, 0x38, 0x16, 0xE7, 0xE5, 0x1F, 0x4F, 0x4E, 0xC7, 0xDF, 0x7E, 0x74, 0xE6, 0xC9, 0x0F, 0xF7, 0x3D, 0xF4, 0x23, 0x7C, 0xE3, 0xED, 0x5F, 0x02, 0x81, 0x81, 0x00, 0xDC, 0x3D, 0x57, 0x13, 0x3C, 0x1D, 0xC8, 0x8A, 0x85, 0x6D, 0x3A, 0xF7, 0xD4, 0x9C, 0xDF, 0x20, 0x2A, 0xF3, 0x5A, 0x6E, 0xA6, 0xD6, 0xB7, 0xEF, 0x13, 0x7C, 0x66, 0xBF, 0x26, 0x31, 0x0C, 0xE7, 0xB4, 0x05, 0x5E, 0xA5, 0xE1, 0x26, 0x09, 0x29, 0x74, 0x7F, 0x10, 0xEF, 0x08, 0x7D, 0xC2, 0x6C, 0x81, 0xDB, 0xB2, 0xCC, 0x80, 0xA9, 0x74, 0x1C, 0x19, 0x7E, 0xF4, 0x1A, 0x2C, 0x73, 0x70, 0x2E, 0x2D, 0x70, 0x56, 0x26, 0x8E, 0x74, 0xB0, 0xE1, 0xD0, 0xD6, 0x66, 0x25, 0xB3, 0x13, 0x8B, 0x7C, 0x36, 0xFD, 0x2C, 0x5B, 0x2D, 0xFB, 0x56, 0xE1, 0xAF, 0x4D, 0xEF, 0xA3, 0x28, 0x11, 0x1D, 0x29, 0xC4, 0xB5, 0x0E, 0x0D, 0x37, 0xCE, 0xC1, 0xCD, 0x51, 0x20, 0xD2, 0x15, 0x3A, 0x0E, 0x06, 0x29, 0x07, 0x22, 0x90, 0x6B, 0x93, 0x76, 0x65, 0xE6, 0x8E, 0xCE, 0x26, 0x26, 0x54, 0x1E, 0xD7, 0x01, 0x02, 0x81, 0x80, 0x45, 0xEC, 0xE8, 0xED, 0x2B, 0x19, 0x4B, 0xC5, 0x43, 0x02, 0xA6, 0x3F, 0x33, 0xA4, 0x37, 0x8A, 0x87, 0x35, 0x44, 0x2A, 0xD5, 0xEF, 0xB4, 0xFA, 0x54, 0xE4, 0xDE, 0x02, 0x5D, 0x60, 0x24, 0x02, 0xD5, 0x8C, 0x00, 0xD9, 0x5D, 0x68, 0xFF, 0x82, 0x48, 0x99, 0x1A, 0xC3, 0x3A, 0xF2, 0xA6, 0x9E, 0x91, 0x44, 0x3D, 0x25, 0x8D, 0x99, 0xB1, 0x64, 0x4B, 0x60, 0x1D, 0xD7, 0x9A, 0x3B, 0x8D, 0x6F, 0xA3, 0x17, 0xDC, 0x45, 0x85, 0x85, 0x40, 0x4A, 0xB7, 0x5D, 0x9A, 0x84, 0xD0, 0x60, 0x27, 0xDA, 0xE4, 0x1E, 0x38, 0x44, 0xAE, 0x35, 0x81, 0xC2, 0x0E, 0x5A, 0x5C, 0x2A, 0x6C, 0xC7, 0xEC, 0x45, 0x57, 0xA2, 0xBD, 0xE0, 0xEB, 0x5E, 0x17, 0x2E, 0xF6, 0xBC, 0x7A, 0xA9, 0xAC, 0xDA, 0x09, 0xFB, 0xC1, 0x80, 0xCF, 0x00, 0xE2, 0x93, 0xEA, 0x56, 0x7D, 0x3D, 0xB5, 0x0E, 0x2A, 0xBF, 0xF3, 0xAD, 0x02, 0x81, 0x81, 0x00, 0x9A, 0x5D, 0xFD, 0x8A, 0xC2, 0x70, 0x31, 0x30, 0x8F, 0xD7, 0x2A, 0x00, 0x19, 0xF5, 0x03, 0x1D, 0x73, 0x99, 0x8D, 0xD7, 0x06, 0xA7, 0x78, 0xE2, 0xB8, 0x61, 0x67, 0xCC, 0x17, 0x6A, 0x2F, 0x79, 0xC5, 0x9F, 0xC4, 0xB6, 0x5A, 0xC9, 0xAB, 0x67, 0xF0, 0xD2, 0x31, 0x8F, 0x85, 0x94, 0xDC, 0x3B, 0xD1, 0x2F, 0x70, 0x8E, 0xAB, 0x16, 0x09, 0x97, 0xFA, 0x12, 0xF8, 0x58, 0xBF, 0x23, 0x82, 0x71, 0xF8, 0x7F, 0x37, 0xB3, 0x37, 0x75, 0x42, 0x2A, 0xAC, 0xD3, 0xE7, 0x08, 0x96, 0x8A, 0xAA, 0x5C, 0xA0, 0x09, 0x1C, 0xA5, 0x78, 0x66, 0xBC, 0x11, 0x99, 0x54, 0xD1, 0xD0, 0xFD, 0x86, 0xC4, 0xB1, 0x1F, 0x77, 0x4E, 0xFB, 0x6C, 0x91, 0x50, 0x42, 0xEC, 0xA7, 0x31, 0x9E, 0x5D, 0xF1, 0x16, 0x09, 0xB4, 0x43, 0x17, 0xFC, 0xD2, 0x3F, 0xCE, 0xEC, 0x07, 0x36, 0xF4, 0x8E, 0xBA, 0xAE, 0x11, 0x34,  };

#define KAA_SHA1_PUB_LEN 20
#define KAA_SHA1_PUB_BASE64_LEN 28


uint8_t KAA_SHA1_PUB[] = { 0x91, 0x5C, 0x19, 0x4A, 0x29, 0xFF, 0xFB, 0xB5, 0xEA, 0x73, 0xEF, 0xD5, 0x28, 0x94, 0x15, 0x3E, 0x16, 0xEB, 0xA4, 0xD2,  };

uint8_t KAA_SHA1_PUB_BASE64[] = { 0x6B, 0x56, 0x77, 0x5A, 0x53, 0x69, 0x6E, 0x2F, 0x2B, 0x37, 0x58, 0x71, 0x63, 0x2B, 0x2F, 0x56, 0x4B, 0x4A, 0x51, 0x56, 0x50, 0x68, 0x62, 0x72, 0x70, 0x4E, 0x49, 0x3D,  };

#endif /* KAA_RSA_KEYS_H */
