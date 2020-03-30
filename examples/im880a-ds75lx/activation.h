/* Device and application informations required for OTAA activation */

#ifndef ACTIVATION_H
#define ACTIVATION_H

// DevEUI cafebabe02000001
// AppEUI cafebabe02ffffff
// AppKey cafebabe02000001cafebabe02ffffff
static const uint8_t deveui[LORAMAC_DEVEUI_LEN] = { 0xca, 0xfe, 0xba, 0xbe, 0x02, 0x00, 0x00, 0x01 };
static const uint8_t appeui[LORAMAC_APPEUI_LEN] = { 0xca, 0xfe, 0xba, 0xbe, 0x02, 0xff, 0xff, 0xff };
static const uint8_t appkey[LORAMAC_APPKEY_LEN] = { 0xca, 0xfe, 0xba, 0xbe, 0x02, 0x00, 0x00, 0x01, 0xca, 0xfe, 0xba, 0xbe, 0x02, 0xff, 0xff, 0xff };

#endif // ACTIVATION_H