const unsigned short RGBTable[4096] = 
{0x0420,0x0400,0x03C0,0x03A0,0x0360,0x0340,0x0300,0x02E0,0x02A0,0x0A60,0x2A40,0x4A00,0x69E0,0x89A0,0xA980,0xC940,0x03C0,
0x03A0,0x0360,0x0340,0x0300,0x02C0,0x02A0,0x0260,0x0240,0x0A00,0x29E0,0x49A0,0x6960,0x8940,0xA900,0xC8E0,0x0360,
0x0320,0x0300,0x02C0,0x02A0,0x0260,0x0240,0x0200,0x01C0,0x09A0,0x2960,0x4940,0x6900,0x88E0,0xA8A0,0xC880,0x0300,
0x02C0,0x02A0,0x0260,0x0220,0x0200,0x01C0,0x01A0,0x0160,0x0940,0x2900,0x48E0,0x68A0,0x8860,0xA840,0xC800,0x0280,
0x0260,0x0220,0x0200,0x01C0,0x01A0,0x0160,0x0140,0x0100,0x08C0,0x28A0,0x4860,0x6840,0x8800,0xA800,0xC800,0x0220,
0x0200,0x01C0,0x01A0,0x0160,0x0120,0x0100,0x00C0,0x00A0,0x0860,0x2840,0x4800,0x6800,0x8800,0xA800,0xC800,0x01C0,
0x0180,0x0160,0x0120,0x0100,0x00C0,0x00A0,0x0060,0x0020,0x0800,0x2800,0x4800,0x6800,0x8800,0xA800,0xC800,0x0160,
0x0120,0x0100,0x00C0,0x0080,0x0060,0x0020,0x0000,0x0000,0x0800,0x2800,0x4800,0x6800,0x8800,0xA800,0xC800,0x00E0,
0x00C0,0x0080,0x0060,0x0020,0x0000,0x0000,0x0000,0x0000,0x0800,0x2800,0x4800,0x6800,0x8800,0xA800,0xC800,0x0080,
0x0060,0x0020,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0800,0x2800,0x4800,0x6800,0x8800,0xA800,0xC800,0x0024,
0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0804,0x2804,0x4804,0x6804,0x8804,0xA804,0xC804,0x0007,
0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0807,0x2807,0x4807,0x6807,0x8807,0xA807,0xC807,0x000A,
0x000A,0x000A,0x000A,0x000A,0x000A,0x000A,0x000A,0x000A,0x080A,0x280A,0x480A,0x680A,0x880A,0xA80A,0xC80A,0x000D,
0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x080D,0x280D,0x480D,0x680D,0x880D,0xA80D,0xC80D,0x0010,
0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0810,0x2810,0x4810,0x6810,0x8810,0xA810,0xC810,0x0014,
0x0014,0x0014,0x0014,0x0014,0x0014,0x0014,0x0014,0x0014,0x0814,0x2814,0x4814,0x6814,0x8814,0xA814,0xC814,0x04C0,
0x04A0,0x0460,0x0420,0x0400,0x03C0,0x03A0,0x0360,0x0340,0x2300,0x42E0,0x62A0,0x8260,0xA240,0xC200,0xE1E0,0x0460,
0x0420,0x0400,0x03C0,0x03A0,0x0360,0x0340,0x0300,0x02C0,0x22A0,0x4260,0x6240,0x8200,0xA1E0,0xC1A0,0xE160,0x0400,
0x03C0,0x03A0,0x0360,0x0320,0x0300,0x02C0,0x02A0,0x0260,0x2240,0x4200,0x61C0,0x81A0,0xA160,0xC140,0xE100,0x0380,
0x0360,0x0320,0x0300,0x02C0,0x02A0,0x0260,0x0220,0x0200,0x21C0,0x41A0,0x6160,0x8140,0xA100,0xC0E0,0xE0A0,0x0320,
0x0300,0x02C0,0x0280,0x0260,0x0220,0x0200,0x01C0,0x01A0,0x2160,0x4140,0x6100,0x80C0,0xA0A0,0xC060,0xE040,0x02C0,
0x0280,0x0260,0x0220,0x0200,0x01C0,0x01A0,0x0160,0x0120,0x2100,0x40C0,0x60A0,0x8060,0xA040,0xC000,0xE000,0x0260,
0x0220,0x0200,0x01C0,0x0180,0x0160,0x0120,0x0100,0x00C0,0x20A0,0x4060,0x6020,0x8000,0xA000,0xC000,0xE000,0x01E0,
0x01C0,0x0180,0x0160,0x0120,0x0100,0x00C0,0x0080,0x0060,0x2020,0x4000,0x6000,0x8000,0xA000,0xC000,0xE000,0x0180,
0x0160,0x0120,0x00E0,0x00C0,0x0080,0x0060,0x0020,0x0000,0x2000,0x4000,0x6000,0x8000,0xA000,0xC000,0xE000,0x0123,
0x00E3,0x00C3,0x0083,0x0063,0x0023,0x0003,0x0003,0x0003,0x2003,0x4003,0x6003,0x8003,0xA003,0xC003,0xE003,0x00C6,
0x0086,0x0066,0x0026,0x0006,0x0006,0x0006,0x0006,0x0006,0x2006,0x4006,0x6006,0x8006,0xA006,0xC006,0xE006,0x0049,
0x0029,0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,0x2009,0x4009,0x6009,0x8009,0xA009,0xC009,0xE009,0x000C,
0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x000C,0x200C,0x400C,0x600C,0x800C,0xA00C,0xC00C,0xE00C,0x0010,
0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x2010,0x4010,0x6010,0x8010,0xA010,0xC010,0xE010,0x0013,
0x0013,0x0013,0x0013,0x0013,0x0013,0x0013,0x0013,0x0013,0x2013,0x4013,0x6013,0x8013,0xA013,0xC013,0xE013,0x0016,
0x0016,0x0016,0x0016,0x0016,0x0016,0x0016,0x0016,0x0016,0x2016,0x4016,0x6016,0x8016,0xA016,0xC016,0xE016,0x0560,
0x0520,0x0500,0x04C0,0x04A0,0x0460,0x0420,0x0400,0x13C0,0x33A0,0x5360,0x7340,0x9300,0xB2C0,0xD2A0,0xF260,0x0500,
0x04C0,0x0480,0x0460,0x0420,0x0400,0x03C0,0x03A0,0x1360,0x3320,0x5300,0x72C0,0x92A0,0xB260,0xD240,0xF200,0x0480,
0x0460,0x0420,0x0400,0x03C0,0x0380,0x0360,0x0320,0x1300,0x32C0,0x52A0,0x7260,0x9240,0xB200,0xD1C0,0xF1A0,0x0420,
0x03E0,0x03C0,0x0380,0x0360,0x0320,0x0300,0x02C0,0x12A0,0x3260,0x5220,0x7200,0x91C0,0xB1A0,0xD160,0xF140,0x03C0,
0x0380,0x0360,0x0320,0x0300,0x02C0,0x0280,0x0260,0x1220,0x3200,0x51C0,0x71A0,0x9160,0xB120,0xD100,0xF0C0,0x0360,
0x0320,0x02E0,0x02C0,0x0280,0x0260,0x0220,0x0200,0x11C0,0x3180,0x5160,0x7120,0x9100,0xB0C0,0xD0A0,0xF060,0x02E0,
0x02C0,0x0280,0x0260,0x0220,0x01E0,0x01C0,0x0180,0x1160,0x3120,0x5100,0x70C0,0x90A0,0xB060,0xD020,0xF000,0x0280,
0x0240,0x0220,0x01E0,0x01C0,0x0180,0x0160,0x0120,0x1100,0x30C0,0x5080,0x7060,0x9020,0xB000,0xD000,0xF000,0x0222,
0x01E2,0x01C2,0x0182,0x0162,0x0122,0x00E2,0x00C2,0x1082,0x3062,0x5022,0x7002,0x9002,0xB002,0xD002,0xF002,0x01C5,
0x0185,0x0145,0x0125,0x00E5,0x00C5,0x0085,0x0065,0x1025,0x3005,0x5005,0x7005,0x9005,0xB005,0xD005,0xF005,0x0148,
0x0128,0x00E8,0x00C8,0x0088,0x0048,0x0028,0x0008,0x1008,0x3008,0x5008,0x7008,0x9008,0xB008,0xD008,0xF008,0x00EB,
0x00AB,0x008B,0x004B,0x002B,0x000B,0x000B,0x000B,0x100B,0x300B,0x500B,0x700B,0x900B,0xB00B,0xD00B,0xF00B,0x008F,
0x004F,0x002F,0x000F,0x000F,0x000F,0x000F,0x000F,0x100F,0x300F,0x500F,0x700F,0x900F,0xB00F,0xD00F,0xF00F,0x0032,
0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,0x0012,0x1012,0x3012,0x5012,0x7012,0x9012,0xB012,0xD012,0xF012,0x0015,
0x0015,0x0015,0x0015,0x0015,0x0015,0x0015,0x0015,0x1015,0x3015,0x5015,0x7015,0x9015,0xB015,0xD015,0xF015,0x0018,
0x0018,0x0018,0x0018,0x0018,0x0018,0x0018,0x0018,0x1018,0x3018,0x5018,0x7018,0x9018,0xB018,0xD018,0xF018,0x05E0,
0x05C0,0x0580,0x0560,0x0520,0x0500,0x04C0,0x04A0,0x2460,0x4420,0x6400,0x83C0,0xA3A0,0xC360,0xE340,0xFB00,0x0580,
0x0560,0x0520,0x0500,0x04C0,0x0480,0x0460,0x0420,0x2400,0x43C0,0x63A0,0x8360,0xA320,0xC300,0xE2C0,0xFAA0,0x0520,
0x04E0,0x04C0,0x0480,0x0460,0x0420,0x0400,0x03C0,0x2380,0x4360,0x6320,0x8300,0xA2C0,0xC2A0,0xE260,0xFA40,0x04C0,
0x0480,0x0460,0x0420,0x03E0,0x03C0,0x0380,0x0360,0x2320,0x4300,0x62C0,0x82A0,0xA260,0xC220,0xE200,0xF9C0,0x0440,
0x0420,0x03E0,0x03C0,0x0380,0x0360,0x0320,0x0300,0x22C0,0x4280,0x6260,0x8220,0xA200,0xC1C0,0xE1A0,0xF960,0x03E0,
0x03C0,0x0380,0x0360,0x0320,0x02E0,0x02C0,0x0280,0x2260,0x4220,0x6200,0x81C0,0xA180,0xC160,0xE120,0xF900,0x0380,
0x0340,0x0320,0x02E0,0x02C0,0x0280,0x0260,0x0220,0x21E0,0x41C0,0x6180,0x8160,0xA120,0xC100,0xE0C0,0xF880,0x0321,
0x02E1,0x02C1,0x0281,0x0241,0x0221,0x01E1,0x01C1,0x2181,0x4161,0x6121,0x80E1,0xA0C1,0xC081,0xE061,0xF821,0x02A4,
0x0284,0x0244,0x0224,0x01E4,0x01C4,0x0184,0x0164,0x2124,0x40E4,0x60C4,0x8084,0xA064,0xC024,0xE004,0xF804,0x0247,
0x0227,0x01E7,0x01C7,0x0187,0x0147,0x0127,0x00E7,0x20C7,0x4087,0x6067,0x8027,0xA007,0xC007,0xE007,0xF807,0x01EB,
0x01AB,0x018B,0x014B,0x012B,0x00EB,0x00CB,0x008B,0x204B,0x402B,0x600B,0x800B,0xA00B,0xC00B,0xE00B,0xF80B,0x018E,
0x014E,0x012E,0x00EE,0x00AE,0x008E,0x004E,0x002E,0x200E,0x400E,0x600E,0x800E,0xA00E,0xC00E,0xE00E,0xF80E,0x0111,
0x00F1,0x00B1,0x0091,0x0051,0x0031,0x0011,0x0011,0x2011,0x4011,0x6011,0x8011,0xA011,0xC011,0xE011,0xF811,0x00B4,
0x0094,0x0054,0x0014,0x0014,0x0014,0x0014,0x0014,0x2014,0x4014,0x6014,0x8014,0xA014,0xC014,0xE014,0xF814,0x0057,
0x0017,0x0017,0x0017,0x0017,0x0017,0x0017,0x0017,0x2017,0x4017,0x6017,0x8017,0xA017,0xC017,0xE017,0xF817,0x001B,
0x001B,0x001B,0x001B,0x001B,0x001B,0x001B,0x001B,0x201B,0x401B,0x601B,0x801B,0xA01B,0xC01B,0xE01B,0xF81B,0x0680,
0x0660,0x0620,0x05E0,0x05C0,0x0580,0x0560,0x1D20,0x3D00,0x5CC0,0x7C80,0x9C60,0xBC20,0xDC00,0xFBC0,0xFBA0,0x0620,
0x05E0,0x05C0,0x0580,0x0560,0x0520,0x04E0,0x1CC0,0x3C80,0x5C60,0x7C20,0x9C00,0xBBC0,0xDBA0,0xFB60,0xFB20,0x05C0,
0x0580,0x0540,0x0520,0x04E0,0x04C0,0x0480,0x1C60,0x3C20,0x5C00,0x7BC0,0x9B80,0xBB60,0xDB20,0xFB00,0xFAC0,0x0540,
0x0520,0x04E0,0x04C0,0x0480,0x0460,0x0420,0x1BE0,0x3BC0,0x5B80,0x7B60,0x9B20,0xBB00,0xDAC0,0xFA80,0xFA60,0x04E0,
0x04C0,0x0480,0x0440,0x0420,0x03E0,0x03C0,0x1B80,0x3B60,0x5B20,0x7AE0,0x9AC0,0xBA80,0xDA60,0xFA20,0xFA00,0x0480,
0x0440,0x0420,0x03E0,0x03C0,0x0380,0x0340,0x1B20,0x3AE0,0x5AC0,0x7A80,0x9A60,0xBA20,0xDA00,0xF9C0,0xF980,0x0420,
0x03E0,0x03A0,0x0380,0x0340,0x0320,0x02E0,0x1AC0,0x3A80,0x5A60,0x7A20,0x99E0,0xB9C0,0xD980,0xF960,0xF920,0x03A3,
0x0383,0x0343,0x0323,0x02E3,0x02C3,0x0283,0x1A43,0x3A23,0x59E3,0x79C3,0x9983,0xB963,0xD923,0xF8E3,0xF8C3,0x0347,
0x0327,0x02E7,0x02A7,0x0287,0x0247,0x0227,0x19E7,0x39C7,0x5987,0x7947,0x9927,0xB8E7,0xD8C7,0xF887,0xF867,0x02EA,
0x02AA,0x028A,0x024A,0x022A,0x01EA,0x01AA,0x198A,0x394A,0x592A,0x78EA,0x98CA,0xB88A,0xD86A,0xF82A,0xF80A,0x028D,
0x024D,0x020D,0x01ED,0x01AD,0x018D,0x014D,0x192D,0x38ED,0x58CD,0x788D,0x984D,0xB82D,0xD80D,0xF80D,0xF80D,0x0210,
0x01F0,0x01B0,0x0190,0x0150,0x0130,0x00F0,0x18B0,0x3890,0x5850,0x7830,0x9810,0xB810,0xD810,0xF810,0xF810,0x01B3,
0x0193,0x0153,0x0113,0x00F3,0x00B3,0x0093,0x1853,0x3833,0x5813,0x7813,0x9813,0xB813,0xD813,0xF813,0xF813,0x0157,
0x0117,0x00F7,0x00B7,0x0097,0x0057,0x0017,0x1817,0x3817,0x5817,0x7817,0x9817,0xB817,0xD817,0xF817,0xF817,0x00FA,
0x00BA,0x007A,0x005A,0x001A,0x001A,0x001A,0x181A,0x381A,0x581A,0x781A,0x981A,0xB81A,0xD81A,0xF81A,0xF81A,0x007D,
0x005D,0x001D,0x001D,0x001D,0x001D,0x001D,0x181D,0x381D,0x581D,0x781D,0x981D,0xB81D,0xD81D,0xF81D,0xF81D,0x0720,
0x06E0,0x06C0,0x0680,0x0660,0x0620,0x0DE0,0x2DC0,0x4D80,0x6D60,0x8D20,0xAD00,0xCCC0,0xEC80,0xFC60,0xFC20,0x06C0,
0x0680,0x0640,0x0620,0x05E0,0x05C0,0x0D80,0x2D60,0x4D20,0x6CE0,0x8CC0,0xAC80,0xCC60,0xEC20,0xFC00,0xFBC0,0x0640,
0x0620,0x05E0,0x05C0,0x0580,0x0540,0x0D20,0x2CE0,0x4CC0,0x6C80,0x8C60,0xAC20,0xCC00,0xEBC0,0xFB80,0xFB60,0x05E0,
0x05A0,0x0580,0x0540,0x0520,0x04E0,0x0CC0,0x2C80,0x4C60,0x6C20,0x8BE0,0xABC0,0xCB80,0xEB60,0xFB20,0xFB00,0x0580,
0x0540,0x0520,0x04E0,0x04C0,0x0480,0x0C40,0x2C20,0x4BE0,0x6BC0,0x8B80,0xAB60,0xCB20,0xEAE0,0xFAC0,0xFA80,0x0520,
0x04E0,0x04A0,0x0480,0x0440,0x0420,0x0BE0,0x2BC0,0x4B80,0x6B40,0x8B20,0xAAE0,0xCAC0,0xEA80,0xFA60,0xFA20,0x04A2,
0x0482,0x0442,0x0422,0x03E2,0x03A2,0x0B82,0x2B42,0x4B22,0x6AE2,0x8AC2,0xAA82,0xCA42,0xEA22,0xF9E2,0xF9C2,0x0446,
0x0406,0x03E6,0x03A6,0x0386,0x0346,0x0B26,0x2AE6,0x4AC6,0x6A86,0x8A46,0xAA26,0xC9E6,0xE9C6,0xF986,0xF966,0x03E9,
0x03A9,0x0389,0x0349,0x0329,0x02E9,0x0AA9,0x2A89,0x4A49,0x6A29,0x89E9,0xA9C9,0xC989,0xE949,0xF929,0xF8E9,0x038C,
0x034C,0x030C,0x02EC,0x02AC,0x028C,0x0A4C,0x2A2C,0x49EC,0x69AC,0x898C,0xA94C,0xC92C,0xE8EC,0xF8CC,0xF88C,0x030F,
0x02EF,0x02AF,0x028F,0x024F,0x020F,0x09EF,0x29AF,0x498F,0x694F,0x892F,0xA8EF,0xC8AF,0xE88F,0xF84F,0xF82F,0x02B2,
0x0272,0x0252,0x0212,0x01F2,0x01B2,0x0992,0x2952,0x4912,0x68F2,0x88B2,0xA892,0xC852,0xE832,0xF812,0xF812,0x0256,
0x0216,0x01F6,0x01B6,0x0176,0x0156,0x0916,0x28F6,0x48B6,0x6896,0x8856,0xA836,0xC816,0xE816,0xF816,0xF816,0x01F9,
0x01B9,0x0179,0x0159,0x0119,0x00F9,0x08B9,0x2899,0x4859,0x6819,0x8819,0xA819,0xC819,0xE819,0xF819,0xF819,0x017C,
0x015C,0x011C,0x00FC,0x00BC,0x007C,0x085C,0x281C,0x481C,0x681C,0x881C,0xA81C,0xC81C,0xE81C,0xF81C,0xF81C,0x011F,
0x00DF,0x00BF,0x007F,0x005F,0x001F,0x081F,0x281F,0x481F,0x681F,0x881F,0xA81F,0xC81F,0xE81F,0xF81F,0xF81F,0x07A0,
0x0780,0x0740,0x0720,0x06E0,0x06C0,0x1E80,0x3E40,0x5E20,0x7DE0,0x9DC0,0xBD80,0xDD60,0xFD20,0xFD00,0xFCC0,0x0740,
0x0720,0x06E0,0x06A0,0x0680,0x0640,0x1E20,0x3DE0,0x5DC0,0x7D80,0x9D60,0xBD20,0xDCE0,0xFCC0,0xFC80,0xFC60,0x06E0,
0x06A0,0x0680,0x0640,0x0620,0x05E0,0x1DC0,0x3D80,0x5D40,0x7D20,0x9CE0,0xBCC0,0xDC80,0xFC60,0xFC20,0xFBE0,0x0680,
0x0640,0x0620,0x05E0,0x05A0,0x0580,0x1D40,0x3D20,0x5CE0,0x7CC0,0x9C80,0xBC40,0xDC20,0xFBE0,0xFBC0,0xFB80,0x0600,
0x05E0,0x05A0,0x0580,0x0540,0x0520,0x1CE0,0x3CA0,0x5C80,0x7C40,0x9C20,0xBBE0,0xDBC0,0xFB80,0xFB60,0xFB20,0x05A2,
0x0582,0x0542,0x0502,0x04E2,0x04A2,0x1C82,0x3C42,0x5C22,0x7BE2,0x9BC2,0xBB82,0xDB42,0xFB22,0xFAE2,0xFAC2,0x0545,
0x0505,0x04E5,0x04A5,0x0485,0x0445,0x1C25,0x3BE5,0x5BA5,0x7B85,0x9B45,0xBB25,0xDAE5,0xFAC5,0xFA85,0xFA45,0x04E8,
0x04A8,0x0488,0x0448,0x0408,0x03E8,0x1BA8,0x3B88,0x5B48,0x7B28,0x9AE8,0xBAA8,0xDA88,0xFA48,0xFA28,0xF9E8,0x046B,
0x044B,0x040B,0x03EB,0x03AB,0x038B,0x1B4B,0x3B0B,0x5AEB,0x7AAB,0x9A8B,0xBA4B,0xDA2B,0xF9EB,0xF9CB,0xF98B,0x040E,
0x03EE,0x03AE,0x036E,0x034E,0x030E,0x1AEE,0x3AAE,0x5A8E,0x7A4E,0x9A2E,0xB9EE,0xD9AE,0xF98E,0xF94E,0xF92E,0x03B2,
0x0372,0x0352,0x0312,0x02F2,0x02B2,0x1A92,0x3A52,0x5A12,0x79F2,0x99B2,0xB992,0xD952,0xF932,0xF8F2,0xF8B2,0x0355,
0x0315,0x02F5,0x02B5,0x0275,0x0255,0x1A15,0x39F5,0x59B5,0x7995,0x9955,0xB915,0xD8F5,0xF8B5,0xF895,0xF855,0x02D8,
0x02B8,0x0278,0x0258,0x0218,0x01F8,0x19B8,0x3978,0x5958,0x7918,0x98F8,0xB8B8,0xD898,0xF858,0xF838,0xF818,0x027B,
0x025B,0x021B,0x01DB,0x01BB,0x017B,0x195B,0x391B,0x58FB,0x78BB,0x989B,0xB85B,0xD81B,0xF81B,0xF81B,0xF81B,0x021E,
0x01DE,0x01BE,0x017E,0x015E,0x011E,0x18FE,0x38BE,0x587E,0x785E,0x981E,0xB81E,0xD81E,0xF81E,0xF81E,0xF81E,0x01BF,
0x017F,0x015F,0x011F,0x00DF,0x00BF,0x187F,0x385F,0x581F,0x781F,0x981F,0xB81F,0xD81F,0xF81F,0xF81F,0xF81F,0x07E0,
0x07E0,0x07E0,0x07A0,0x0780,0x0F40,0x2F20,0x4EE0,0x76C0,0x9680,0xB640,0xD620,0xF5E0,0xFDC0,0xFD80,0xFD60,0x07E0,
0x07A0,0x0780,0x0740,0x0720,0x0EE0,0x2EA0,0x4E80,0x7640,0x9620,0xB5E0,0xD5C0,0xF580,0xFD60,0xFD20,0xFCE0,0x0780,
0x0740,0x0700,0x06E0,0x06A0,0x0E80,0x2E40,0x4E20,0x75E0,0x95C0,0xB580,0xD540,0xF520,0xFCE0,0xFCC0,0xFC80,0x0700,
0x06E0,0x06A0,0x0680,0x0640,0x0E20,0x2DE0,0x4DA0,0x7580,0x9540,0xB520,0xD4E0,0xF4C0,0xFC80,0xFC40,0xFC20,0x06A1,
0x0681,0x0641,0x0601,0x05E1,0x0DA1,0x2D81,0x4D41,0x7521,0x94E1,0xB4A1,0xD481,0xF441,0xFC21,0xFBE1,0xFBC1,0x0644,
0x0604,0x05E4,0x05A4,0x0584,0x0D44,0x2D04,0x4CE4,0x74A4,0x9484,0xB444,0xD424,0xF3E4,0xFBA4,0xFB84,0xFB44,0x05E7,
0x05A7,0x0567,0x0547,0x0507,0x0CE7,0x2CA7,0x4C87,0x7447,0x9427,0xB3E7,0xD3A7,0xF387,0xFB47,0xFB27,0xFAE7,0x056A,
0x054A,0x050A,0x04EA,0x04AA,0x0C8A,0x2C4A,0x4C0A,0x73EA,0x93AA,0xB38A,0xD34A,0xF32A,0xFAEA,0xFAAA,0xFA8A,0x050E,
0x04EE,0x04AE,0x046E,0x044E,0x0C0E,0x2BEE,0x4BAE,0x738E,0x934E,0xB30E,0xD2EE,0xF2AE,0xFA8E,0xFA4E,0xFA2E,0x04B1,
0x0471,0x0451,0x0411,0x03F1,0x0BB1,0x2B71,0x4B51,0x7311,0x92F1,0xB2B1,0xD291,0xF251,0xFA11,0xF9F1,0xF9B1,0x0454,
0x0414,0x03D4,0x03B4,0x0374,0x0B54,0x2B14,0x4AF4,0x72B4,0x9274,0xB254,0xD214,0xF1F4,0xF9B4,0xF994,0xF954,0x03D7,
0x03B7,0x0377,0x0357,0x0317,0x0AD7,0x2AB7,0x4A77,0x7257,0x9217,0xB1F7,0xD1B7,0xF197,0xF957,0xF917,0xF8F7,0x037A,
0x035A,0x031A,0x02DA,0x02BA,0x0A7A,0x2A5A,0x4A1A,0x71FA,0x91BA,0xB17A,0xD15A,0xF11A,0xF8FA,0xF8BA,0xF89A,0x031D,
0x02DD,0x02BD,0x027D,0x025D,0x0A1D,0x29DD,0x49BD,0x717D,0x915D,0xB11D,0xD0FD,0xF0BD,0xF87D,0xF85D,0xF81D,0x02BF,
0x027F,0x023F,0x021F,0x01DF,0x09BF,0x297F,0x495F,0x711F,0x90DF,0xB0BF,0xD07F,0xF05F,0xF81F,0xF81F,0xF81F,0x023F,
0x021F,0x01DF,0x01BF,0x017F,0x093F,0x291F,0x48DF,0x70BF,0x907F,0xB05F,0xD01F,0xF01F,0xF81F,0xF81F,0xF81F,0x07E0,
0x07E0,0x07E0,0x07E0,0x07E0,0x27E0,0x47A0,0x6780,0x8740,0xA720,0xC6E0,0xE6C0,0xFE80,0xFE40,0xFE20,0xFDE0,0x07E0,
0x07E0,0x07E0,0x07E0,0x07A0,0x2780,0x4740,0x6720,0x86E0,0xA6A0,0xC680,0xE640,0xFE20,0xFDE0,0xFDC0,0xFD80,0x07E0,
0x07E0,0x07A0,0x0780,0x0740,0x2700,0x46E0,0x66A0,0x8680,0xA640,0xC620,0xE5E0,0xFDA0,0xFD80,0xFD40,0xFD20,0x07A0,
0x0760,0x0740,0x0700,0x06E0,0x26A0,0x4680,0x6640,0x8600,0xA5E0,0xC5A0,0xE580,0xFD40,0xFD20,0xFCE0,0xFCC0,0x0743,
0x0703,0x06E3,0x06A3,0x0663,0x2643,0x4603,0x65E3,0x85A3,0xA583,0xC543,0xE523,0xFCE3,0xFCA3,0xFC83,0xFC43,0x06C6,
0x06A6,0x0666,0x0646,0x0606,0x25E6,0x45A6,0x6586,0x8546,0xA506,0xC4E6,0xE4A6,0xFC86,0xFC46,0xFC26,0xFBE6,0x0669,
0x0649,0x0609,0x05E9,0x05A9,0x2569,0x4549,0x6509,0x84E9,0xA4A9,0xC489,0xE449,0xFC09,0xFBE9,0xFBA9,0xFB89,0x060D,
0x05CD,0x05AD,0x056D,0x054D,0x250D,0x44ED,0x64AD,0x846D,0xA44D,0xC40D,0xE3ED,0xFBAD,0xFB8D,0xFB4D,0xFB2D,0x05B0,
0x0570,0x0550,0x0510,0x04D0,0x24B0,0x4470,0x6450,0x8410,0xA3F0,0xC3B0,0xE390,0xFB50,0xFB10,0xFAF0,0xFAB0,0x0533,
0x0513,0x04D3,0x04B3,0x0473,0x2453,0x4413,0x63F3,0x83B3,0xA373,0xC353,0xE313,0xFAF3,0xFAB3,0xFA93,0xFA53,0x04D6,
0x04B6,0x0476,0x0456,0x0416,0x23D6,0x43B6,0x6376,0x8356,0xA316,0xC2F6,0xE2B6,0xFA76,0xFA56,0xFA16,0xF9F6,0x0479,
0x0439,0x0419,0x03D9,0x03B9,0x2379,0x4359,0x6319,0x82D9,0xA2B9,0xC279,0xE259,0xFA19,0xF9F9,0xF9B9,0xF999,0x041D,
0x03DD,0x03BD,0x037D,0x033D,0x231D,0x42DD,0x62BD,0x827D,0xA25D,0xC21D,0xE1FD,0xF9BD,0xF97D,0xF95D,0xF91D,0x039F,
0x037F,0x033F,0x031F,0x02DF,0x22BF,0x427F,0x625F,0x821F,0xA1DF,0xC1BF,0xE17F,0xF95F,0xF91F,0xF8FF,0xF8BF,0x033F,
0x031F,0x02DF,0x02BF,0x027F,0x223F,0x421F,0x61DF,0x81BF,0xA17F,0xC15F,0xE11F,0xF8DF,0xF8BF,0xF87F,0xF85F,0x02DF,
0x029F,0x027F,0x023F,0x021F,0x21DF,0x41BF,0x617F,0x813F,0xA11F,0xC0DF,0xE0BF,0xF87F,0xF85F,0xF81F,0xF81F,0x07E0,
0x07E0,0x07E0,0x07E0,0x17E0,0x37E0,0x57E0,0x77E0,0x97E0,0xB7A0,0xD780,0xF740,0xFF20,0xFEE0,0xFEC0,0xFE80,0x07E0,
0x07E0,0x07E0,0x07E0,0x17E0,0x37E0,0x57E0,0x77A0,0x9780,0xB740,0xD720,0xF6E0,0xFEA0,0xFE80,0xFE40,0xFE20,0x07E0,
0x07E0,0x07E0,0x07E0,0x17E0,0x37A0,0x5780,0x7740,0x9700,0xB6E0,0xD6A0,0xF680,0xFE40,0xFE20,0xFDE0,0xFDA0,0x07E2,
0x07E2,0x07E2,0x07A2,0x1762,0x3742,0x5702,0x76E2,0x96A2,0xB682,0xD642,0xF602,0xFDE2,0xFDA2,0xFD82,0xFD42,0x07C5,
0x07A5,0x0765,0x0745,0x1705,0x36E5,0x56A5,0x7665,0x9645,0xB605,0xD5E5,0xF5A5,0xFD85,0xFD45,0xFD05,0xFCE5,0x0769,
0x0749,0x0709,0x06C9,0x16A9,0x3669,0x5649,0x7609,0x95E9,0xB5A9,0xD589,0xF549,0xFD09,0xFCE9,0xFCA9,0xFC89,0x070C,
0x06CC,0x06AC,0x066C,0x164C,0x360C,0x55EC,0x75AC,0x956C,0xB54C,0xD50C,0xF4EC,0xFCAC,0xFC8C,0xFC4C,0xFC0C,0x06AF,
0x066F,0x064F,0x060F,0x15CF,0x35AF,0x556F,0x754F,0x950F,0xB4EF,0xD4AF,0xF46F,0xFC4F,0xFC0F,0xFBEF,0xFBAF,0x0632,
0x0612,0x05D2,0x05B2,0x1572,0x3552,0x5512,0x74D2,0x94B2,0xB472,0xD452,0xF412,0xFBF2,0xFBB2,0xFB72,0xFB52,0x05D5,
0x05B5,0x0575,0x0535,0x1515,0x34D5,0x54B5,0x7475,0x9455,0xB415,0xD3D5,0xF3B5,0xFB75,0xFB55,0xFB15,0xFAF5,0x0579,
0x0539,0x0519,0x04D9,0x14B9,0x3479,0x5439,0x7419,0x93D9,0xB3B9,0xD379,0xF359,0xFB19,0xFAF9,0xFAB9,0xFA79,0x051C,
0x04DC,0x04BC,0x047C,0x143C,0x341C,0x53DC,0x73BC,0x937C,0xB35C,0xD31C,0xF2DC,0xFABC,0xFA7C,0xFA5C,0xFA1C,0x049F,
0x047F,0x043F,0x041F,0x13DF,0x33BF,0x537F,0x733F,0x931F,0xB2DF,0xD2BF,0xF27F,0xFA5F,0xFA1F,0xF9DF,0xF9BF,0x043F,
0x041F,0x03DF,0x039F,0x137F,0x333F,0x531F,0x72DF,0x92BF,0xB27F,0xD23F,0xF21F,0xF9DF,0xF9BF,0xF97F,0xF95F,0x03DF,
0x039F,0x037F,0x033F,0x131F,0x32DF,0x529F,0x727F,0x923F,0xB21F,0xD1DF,0xF1BF,0xF97F,0xF95F,0xF91F,0xF8DF,0x037F,
0x033F,0x02FF,0x02DF,0x129F,0x327F,0x523F,0x721F,0x91DF,0xB1BF,0xD17F,0xF13F,0xF91F,0xF8DF,0xF8BF,0xF87F,0x07E0,
0x07E0,0x07E0,0x07E0,0x27E0,0x47E0,0x67E0,0x87E0,0xAFE0,0xCFE0,0xEFE0,0xFFE0,0xFFA0,0xFF80,0xFF40,0xFF20,0x07E0,
0x07E0,0x07E0,0x07E0,0x27E0,0x47E0,0x67E0,0x87E0,0xAFE0,0xCFE0,0xEFA0,0xFF80,0xFF40,0xFF00,0xFEE0,0xFEA0,0x07E1,
0x07E1,0x07E1,0x07E1,0x27E1,0x47E1,0x67E1,0x87E1,0xAFA1,0xCF61,0xEF41,0xFF01,0xFEE1,0xFEA1,0xFE81,0xFE41,0x07E5,
0x07E5,0x07E5,0x07E5,0x27E5,0x47C5,0x67A5,0x8765,0xAF45,0xCF05,0xEEE5,0xFEA5,0xFE85,0xFE45,0xFE05,0xFDE5,0x07E8,
0x07E8,0x07E8,0x07C8,0x27A8,0x4768,0x6748,0x8708,0xAEE8,0xCEA8,0xEE68,0xFE48,0xFE08,0xFDE8,0xFDA8,0xFD88,0x07EB,
0x07CB,0x07AB,0x076B,0x274B,0x470B,0x66CB,0x86AB,0xAE6B,0xCE4B,0xEE0B,0xFDEB,0xFDAB,0xFD6B,0xFD4B,0xFD0B,0x07AE,
0x076E,0x072E,0x070E,0x26CE,0x46AE,0x666E,0x864E,0xAE0E,0xCDCE,0xEDAE,0xFD6E,0xFD4E,0xFD0E,0xFCEE,0xFCAE,0x0731,
0x0711,0x06D1,0x06B1,0x2671,0x4631,0x6611,0x85D1,0xADB1,0xCD71,0xED51,0xFD11,0xFCF1,0xFCB1,0xFC71,0xFC51,0x06D5,
0x0695,0x0675,0x0635,0x2615,0x45D5,0x65B5,0x8575,0xAD55,0xCD15,0xECD5,0xFCB5,0xFC75,0xFC55,0xFC15,0xFBF5,0x0678,
0x0638,0x0618,0x05D8,0x25B8,0x4578,0x6538,0x8518,0xACD8,0xCCB8,0xEC78,0xFC58,0xFC18,0xFBD8,0xFBB8,0xFB78,0x061B,
0x05DB,0x059B,0x057B,0x253B,0x451B,0x64DB,0x84BB,0xAC7B,0xCC3B,0xEC1B,0xFBDB,0xFBBB,0xFB7B,0xFB5B,0xFB1B,0x059E,
0x057E,0x053E,0x051E,0x24DE,0x449E,0x647E,0x843E,0xAC1E,0xCBDE,0xEBBE,0xFB7E,0xFB5E,0xFB1E,0xFADE,0xFABE,0x053F,
0x04FF,0x04DF,0x049F,0x247F,0x443F,0x641F,0x83DF,0xABBF,0xCB7F,0xEB3F,0xFB1F,0xFADF,0xFABF,0xFA7F,0xFA5F,0x04DF,
0x049F,0x047F,0x043F,0x241F,0x43DF,0x639F,0x837F,0xAB3F,0xCB1F,0xEADF,0xFABF,0xFA7F,0xFA3F,0xFA1F,0xF9DF,0x047F,
0x043F,0x03FF,0x03DF,0x239F,0x437F,0x633F,0x831F,0xAADF,0xCA9F,0xEA7F,0xFA3F,0xFA1F,0xF9DF,0xF9BF,0xF97F,0x03FF,
0x03DF,0x039F,0x037F,0x233F,0x42FF,0x62DF,0x829F,0xAA7F,0xCA3F,0xEA1F,0xF9DF,0xF9BF,0xF97F,0xF93F,0xF91F,0x07E0,
0x07E0,0x07E0,0x1FE0,0x3FE0,0x5FE0,0x7FE0,0x9FE0,0xBFE0,0xDFE0,0xFFE0,0xFFE0,0xFFE0,0xFFE0,0xFFE0,0xFFA0,0x07E0,
0x07E0,0x07E0,0x1FE0,0x3FE0,0x5FE0,0x7FE0,0x9FE0,0xBFE0,0xDFE0,0xFFE0,0xFFE0,0xFFE0,0xFFA0,0xFF80,0xFF40,0x07E4,
0x07E4,0x07E4,0x1FE4,0x3FE4,0x5FE4,0x7FE4,0x9FE4,0xBFE4,0xDFE4,0xFFE4,0xFFA4,0xFF64,0xFF44,0xFF04,0xFEE4,0x07E7,
0x07E7,0x07E7,0x1FE7,0x3FE7,0x5FE7,0x7FE7,0x9FE7,0xBFC7,0xDFA7,0xFF67,0xFF47,0xFF07,0xFEE7,0xFEA7,0xFE67,0x07EA,
0x07EA,0x07EA,0x1FEA,0x3FEA,0x5FEA,0x7FCA,0x9FAA,0xBF6A,0xDF4A,0xFF0A,0xFEEA,0xFEAA,0xFE6A,0xFE4A,0xFE0A,0x07ED,
0x07ED,0x07ED,0x1FED,0x3FCD,0x5FAD,0x7F6D,0x9F4D,0xBF0D,0xDECD,0xFEAD,0xFE6D,0xFE4D,0xFE0D,0xFDED,0xFDAD,0x07F0,
0x07F0,0x07D0,0x1FB0,0x3F70,0x5F30,0x7F10,0x9ED0,0xBEB0,0xDE70,0xFE50,0xFE10,0xFDD0,0xFDB0,0xFD70,0xFD50,0x07D4,
0x0794,0x0774,0x1F34,0x3F14,0x5ED4,0x7EB4,0x9E74,0xBE34,0xDE14,0xFDD4,0xFDB4,0xFD74,0xFD54,0xFD14,0xFCD4,0x0777,
0x0737,0x0717,0x1ED7,0x3E97,0x5E77,0x7E37,0x9E17,0xBDD7,0xDDB7,0xFD77,0xFD37,0xFD17,0xFCD7,0xFCB7,0xFC77,0x06FA,
0x06DA,0x069A,0x1E7A,0x3E3A,0x5E1A,0x7DDA,0x9D9A,0xBD7A,0xDD3A,0xFD1A,0xFCDA,0xFCBA,0xFC7A,0xFC5A,0xFC1A,0x069D,
0x067D,0x063D,0x1E1D,0x3DDD,0x5D9D,0x7D7D,0x9D3D,0xBD1D,0xDCDD,0xFCBD,0xFC7D,0xFC3D,0xFC1D,0xFBDD,0xFBBD,0x063F,
0x05FF,0x05DF,0x1D9F,0x3D7F,0x5D3F,0x7D1F,0x9CDF,0xBC9F,0xDC7F,0xFC3F,0xFC1F,0xFBDF,0xFBBF,0xFB7F,0xFB3F,0x05DF,
0x059F,0x057F,0x1D3F,0x3CFF,0x5CDF,0x7C9F,0x9C7F,0xBC3F,0xDC1F,0xFBDF,0xFB9F,0xFB7F,0xFB3F,0xFB1F,0xFADF,0x055F,
0x053F,0x04FF,0x1CDF,0x3C9F,0x5C7F,0x7C3F,0x9BFF,0xBBDF,0xDB9F,0xFB7F,0xFB3F,0xFB1F,0xFADF,0xFABF,0xFA7F,0x04FF,
0x04DF,0x049F,0x1C5F,0x3C3F,0x5BFF,0x7BDF,0x9B9F,0xBB7F,0xDB3F,0xFB1F,0xFADF,0xFA9F,0xFA7F,0xFA3F,0xFA1F,0x049F,
0x045F,0x043F,0x1BFF,0x3BDF,0x5B9F,0x7B7F,0x9B3F,0xBAFF,0xDADF,0xFA9F,0xFA7F,0xFA3F,0xFA1F,0xF9DF,0xF99F,0x07E0,
0x07E0,0x0FE0,0x2FE0,0x4FE0,0x6FE0,0x8FE0,0xAFE0,0xCFE0,0xEFE0,0xFFE0,0xFFE0,0xFFE0,0xFFE0,0xFFE0,0xFFE0,0x07E3,
0x07E3,0x0FE3,0x2FE3,0x4FE3,0x6FE3,0x8FE3,0xAFE3,0xCFE3,0xEFE3,0xFFE3,0xFFE3,0xFFE3,0xFFE3,0xFFE3,0xFFE3,0x07E6,
0x07E6,0x0FE6,0x2FE6,0x4FE6,0x6FE6,0x8FE6,0xAFE6,0xCFE6,0xEFE6,0xFFE6,0xFFE6,0xFFE6,0xFFE6,0xFFA6,0xFF66,0x07E9,
0x07E9,0x0FE9,0x2FE9,0x4FE9,0x6FE9,0x8FE9,0xAFE9,0xCFE9,0xEFE9,0xFFE9,0xFFC9,0xFFA9,0xFF69,0xFF49,0xFF09,0x07EC,
0x07EC,0x0FEC,0x2FEC,0x4FEC,0x6FEC,0x8FEC,0xAFEC,0xCFEC,0xEFCC,0xFFAC,0xFF6C,0xFF4C,0xFF0C,0xFECC,0xFEAC,0x07F0,
0x07F0,0x0FF0,0x2FF0,0x4FF0,0x6FF0,0x8FF0,0xAFD0,0xCFB0,0xEF70,0xFF30,0xFF10,0xFED0,0xFEB0,0xFE70,0xFE50,0x07F3,
0x07F3,0x0FF3,0x2FF3,0x4FF3,0x6FD3,0x8F93,0xAF73,0xCF33,0xEF13,0xFED3,0xFEB3,0xFE73,0xFE53,0xFE13,0xFDD3,0x07F6,
0x07F6,0x0FF6,0x2FD6,0x4F96,0x6F76,0x8F36,0xAF16,0xCED6,0xEEB6,0xFE76,0xFE36,0xFE16,0xFDD6,0xFDB6,0xFD76,0x07F9,
0x07D9,0x0F99,0x2F79,0x4F39,0x6F19,0x8ED9,0xAE99,0xCE79,0xEE39,0xFE19,0xFDD9,0xFDB9,0xFD79,0xFD39,0xFD19,0x079C,
0x077C,0x0F3C,0x2EFC,0x4EDC,0x6E9C,0x8E7C,0xAE3C,0xCE1C,0xEDDC,0xFD9C,0xFD7C,0xFD3C,0xFD1C,0xFCDC,0xFCBC,0x073F,
0x06FF,0x0EDF,0x2E9F,0x4E7F,0x6E3F,0x8DFF,0xADDF,0xCD9F,0xED7F,0xFD3F,0xFD1F,0xFCDF,0xFCBF,0xFC7F,0xFC3F,0x06DF,
0x069F,0x0E5F,0x2E3F,0x4DFF,0x6DDF,0x8D9F,0xAD7F,0xCD3F,0xED1F,0xFCDF,0xFC9F,0xFC7F,0xFC3F,0xFC1F,0xFBDF,0x065F,
0x063F,0x0DFF,0x2DDF,0x4D9F,0x6D7F,0x8D3F,0xACFF,0xCCDF,0xEC9F,0xFC7F,0xFC3F,0xFC1F,0xFBDF,0xFB9F,0xFB7F,0x05FF,
0x05DF,0x0D9F,0x2D5F,0x4D3F,0x6CFF,0x8CDF,0xAC9F,0xCC7F,0xEC3F,0xFBFF,0xFBDF,0xFB9F,0xFB7F,0xFB3F,0xFB1F,0x059F,
0x055F,0x0D3F,0x2CFF,0x4CDF,0x6C9F,0x8C5F,0xAC3F,0xCBFF,0xEBDF,0xFB9F,0xFB7F,0xFB3F,0xFB1F,0xFADF,0xFA9F,0x053F,
0x04FF,0x0CBF,0x2C9F,0x4C5F,0x6C3F,0x8BFF,0xABDF,0xCB9F,0xEB7F,0xFB3F,0xFAFF,0xFADF,0xFA9F,0xFA7F,0xFA3F,0x07E2,
0x07E2,0x1FE2,0x3FE2,0x5FE2,0x7FE2,0x9FE2,0xBFE2,0xDFE2,0xFFE2,0xFFE2,0xFFE2,0xFFE2,0xFFE2,0xFFE2,0xFFE2,0x07E5,
0x07E5,0x1FE5,0x3FE5,0x5FE5,0x7FE5,0x9FE5,0xBFE5,0xDFE5,0xFFE5,0xFFE5,0xFFE5,0xFFE5,0xFFE5,0xFFE5,0xFFE5,0x07E8,
0x07E8,0x1FE8,0x3FE8,0x5FE8,0x7FE8,0x9FE8,0xBFE8,0xDFE8,0xFFE8,0xFFE8,0xFFE8,0xFFE8,0xFFE8,0xFFE8,0xFFE8,0x07EC,
0x07EC,0x1FEC,0x3FEC,0x5FEC,0x7FEC,0x9FEC,0xBFEC,0xDFEC,0xFFEC,0xFFEC,0xFFEC,0xFFEC,0xFFEC,0xFFCC,0xFFAC,0x07EF,
0x07EF,0x1FEF,0x3FEF,0x5FEF,0x7FEF,0x9FEF,0xBFEF,0xDFEF,0xFFEF,0xFFEF,0xFFEF,0xFFCF,0xFFAF,0xFF6F,0xFF4F,0x07F2,
0x07F2,0x1FF2,0x3FF2,0x5FF2,0x7FF2,0x9FF2,0xBFF2,0xDFF2,0xFFF2,0xFFD2,0xFFB2,0xFF72,0xFF32,0xFF12,0xFED2,0x07F5,
0x07F5,0x1FF5,0x3FF5,0x5FF5,0x7FF5,0x9FF5,0xBFF5,0xDFD5,0xFF95,0xFF75,0xFF35,0xFF15,0xFED5,0xFEB5,0xFE75,0x07F8,
0x07F8,0x1FF8,0x3FF8,0x5FF8,0x7FF8,0x9FD8,0xBF98,0xDF78,0xFF38,0xFF18,0xFED8,0xFE98,0xFE78,0xFE38,0xFE18,0x07FB,
0x07FB,0x1FFB,0x3FFB,0x5FDB,0x7F9B,0x9F7B,0xBF3B,0xDEFB,0xFEDB,0xFE9B,0xFE7B,0xFE3B,0xFE1B,0xFDDB,0xFDBB,0x07FF,
0x07FF,0x1FDF,0x3F9F,0x5F7F,0x7F3F,0x9EFF,0xBEDF,0xDE9F,0xFE7F,0xFE3F,0xFE1F,0xFDDF,0xFD9F,0xFD7F,0xFD3F,0x07DF,
0x079F,0x1F5F,0x3F3F,0x5EFF,0x7EDF,0x9E9F,0xBE7F,0xDE3F,0xFDFF,0xFDDF,0xFD9F,0xFD7F,0xFD3F,0xFD1F,0xFCDF,0x075F,
0x073F,0x1EFF,0x3EDF,0x5E9F,0x7E5F,0x9E3F,0xBDFF,0xDDDF,0xFD9F,0xFD7F,0xFD3F,0xFCFF,0xFCDF,0xFC9F,0xFC7F,0x06FF,
0x06BF,0x1E9F,0x3E5F,0x5E3F,0x7DFF,0x9DDF,0xBD9F,0xDD5F,0xFD3F,0xFCFF,0xFCDF,0xFC9F,0xFC7F,0xFC3F,0xFC1F,0x069F,
0x065F,0x1E3F,0x3DFF,0x5DBF,0x7D9F,0x9D5F,0xBD3F,0xDCFF,0xFCDF,0xFC9F,0xFC7F,0xFC3F,0xFBFF,0xFBDF,0xFB9F,0x061F,
0x05FF,0x1DBF,0x3D9F,0x5D5F,0x7D3F,0x9CFF,0xBCDF,0xDC9F,0xFC5F,0xFC3F,0xFBFF,0xFBDF,0xFB9F,0xFB7F,0xFB3F,0x05BF,
0x059F,0x1D5F,0x3D3F,0x5CFF,0x7CBF,0x9C9F,0xBC5F,0xDC3F,0xFBFF,0xFBDF,0xFB9F,0xFB5F,0xFB3F,0xFAFF,0xFADF,0x07E4,
0x17E4,0x37E4,0x57E4,0x77E4,0x97E4,0xB7E4,0xD7E4,0xF7E4,0xFFE4,0xFFE4,0xFFE4,0xFFE4,0xFFE4,0xFFE4,0xFFE4,0x07E7,
0x17E7,0x37E7,0x57E7,0x77E7,0x97E7,0xB7E7,0xD7E7,0xF7E7,0xFFE7,0xFFE7,0xFFE7,0xFFE7,0xFFE7,0xFFE7,0xFFE7,0x07EB,
0x17EB,0x37EB,0x57EB,0x77EB,0x97EB,0xB7EB,0xD7EB,0xF7EB,0xFFEB,0xFFEB,0xFFEB,0xFFEB,0xFFEB,0xFFEB,0xFFEB,0x07EE,
0x17EE,0x37EE,0x57EE,0x77EE,0x97EE,0xB7EE,0xD7EE,0xF7EE,0xFFEE,0xFFEE,0xFFEE,0xFFEE,0xFFEE,0xFFEE,0xFFEE,0x07F1,
0x17F1,0x37F1,0x57F1,0x77F1,0x97F1,0xB7F1,0xD7F1,0xF7F1,0xFFF1,0xFFF1,0xFFF1,0xFFF1,0xFFF1,0xFFF1,0xFFD1,0x07F4,
0x17F4,0x37F4,0x57F4,0x77F4,0x97F4,0xB7F4,0xD7F4,0xF7F4,0xFFF4,0xFFF4,0xFFF4,0xFFF4,0xFFD4,0xFFB4,0xFF74,0x07F7,
0x17F7,0x37F7,0x57F7,0x77F7,0x97F7,0xB7F7,0xD7F7,0xF7F7,0xFFF7,0xFFF7,0xFFD7,0xFF97,0xFF77,0xFF37,0xFF17,0x07FB,
0x17FB,0x37FB,0x57FB,0x77FB,0x97FB,0xB7FB,0xD7FB,0xF7FB,0xFFDB,0xFF9B,0xFF7B,0xFF3B,0xFF1B,0xFEDB,0xFE9B,0x07FE,
0x17FE,0x37FE,0x57FE,0x77FE,0x97FE,0xB7FE,0xD7DE,0xF79E,0xFF7E,0xFF3E,0xFEFE,0xFEDE,0xFE9E,0xFE7E,0xFE3E,0x07FF,
0x17FF,0x37FF,0x57FF,0x77FF,0x97DF,0xB79F,0xD75F,0xF73F,0xFEFF,0xFEDF,0xFE9F,0xFE7F,0xFE3F,0xFE1F,0xFDDF,0x07FF,
0x17FF,0x37FF,0x57BF,0x779F,0x975F,0xB73F,0xD6FF,0xF6DF,0xFE9F,0xFE7F,0xFE3F,0xFDFF,0xFDDF,0xFD9F,0xFD7F,0x07FF,
0x17BF,0x379F,0x575F,0x773F,0x96FF,0xB6DF,0xD69F,0xF65F,0xFE3F,0xFDFF,0xFDDF,0xFD9F,0xFD7F,0xFD3F,0xFCFF,0x079F,
0x175F,0x373F,0x56FF,0x76BF,0x969F,0xB65F,0xD63F,0xF5FF,0xFDDF,0xFD9F,0xFD5F,0xFD3F,0xFCFF,0xFCDF,0xFC9F,0x071F,
0x16FF,0x36BF,0x569F,0x765F,0x963F,0xB5FF,0xD5BF,0xF59F,0xFD5F,0xFD3F,0xFCFF,0xFCDF,0xFC9F,0xFC7F,0xFC3F,0x06BF,
0x169F,0x365F,0x561F,0x75FF,0x95BF,0xB59F,0xD55F,0xF53F,0xFCFF,0xFCDF,0xFC9F,0xFC5F,0xFC3F,0xFBFF,0xFBDF,0x065F,
0x161F,0x35FF,0x55BF,0x759F,0x955F,0xB53F,0xD4FF,0xF4BF,0xFC9F,0xFC5F,0xFC3F,0xFBFF,0xFBDF,0xFB9F,0xFB5F,0x07E7,
0x27E7,0x47E7,0x67E7,0x87E7,0xA7E7,0xC7E7,0xE7E7,0xFFE7,0xFFE7,0xFFE7,0xFFE7,0xFFE7,0xFFE7,0xFFE7,0xFFE7,0x07EA,
0x27EA,0x47EA,0x67EA,0x87EA,0xA7EA,0xC7EA,0xE7EA,0xFFEA,0xFFEA,0xFFEA,0xFFEA,0xFFEA,0xFFEA,0xFFEA,0xFFEA,0x07ED,
0x27ED,0x47ED,0x67ED,0x87ED,0xA7ED,0xC7ED,0xE7ED,0xFFED,0xFFED,0xFFED,0xFFED,0xFFED,0xFFED,0xFFED,0xFFED,0x07F0,
0x27F0,0x47F0,0x67F0,0x87F0,0xA7F0,0xC7F0,0xE7F0,0xFFF0,0xFFF0,0xFFF0,0xFFF0,0xFFF0,0xFFF0,0xFFF0,0xFFF0,0x07F3,
0x27F3,0x47F3,0x67F3,0x87F3,0xA7F3,0xC7F3,0xE7F3,0xFFF3,0xFFF3,0xFFF3,0xFFF3,0xFFF3,0xFFF3,0xFFF3,0xFFF3,0x07F7,
0x27F7,0x47F7,0x67F7,0x87F7,0xA7F7,0xC7F7,0xE7F7,0xFFF7,0xFFF7,0xFFF7,0xFFF7,0xFFF7,0xFFF7,0xFFF7,0xFFF7,0x07FA,
0x27FA,0x47FA,0x67FA,0x87FA,0xA7FA,0xC7FA,0xE7FA,0xFFFA,0xFFFA,0xFFFA,0xFFFA,0xFFFA,0xFFFA,0xFFDA,0xFF9A,0x07FD,
0x27FD,0x47FD,0x67FD,0x87FD,0xA7FD,0xC7FD,0xE7FD,0xFFFD,0xFFFD,0xFFFD,0xFFFD,0xFFDD,0xFF9D,0xFF7D,0xFF3D,0x07FF,
0x27FF,0x47FF,0x67FF,0x87FF,0xA7FF,0xC7FF,0xE7FF,0xFFFF,0xFFFF,0xFFDF,0xFF9F,0xFF7F,0xFF3F,0xFEFF,0xFEDF,0x07FF,
0x27FF,0x47FF,0x67FF,0x87FF,0xA7FF,0xC7FF,0xE7FF,0xFFDF,0xFF9F,0xFF5F,0xFF3F,0xFEFF,0xFEDF,0xFE9F,0xFE7F,0x07FF,
0x27FF,0x47FF,0x67FF,0x87FF,0xA7FF,0xC7BF,0xE79F,0xFF5F,0xFF3F,0xFEFF,0xFEDF,0xFE9F,0xFE5F,0xFE3F,0xFDFF,0x07FF,
0x27FF,0x47FF,0x67FF,0x87BF,0xA79F,0xC75F,0xE73F,0xFEFF,0xFEBF,0xFE9F,0xFE5F,0xFE3F,0xFDFF,0xFDDF,0xFD9F,0x07FF,
0x27FF,0x47BF,0x679F,0x875F,0xA71F,0xC6FF,0xE6BF,0xFE9F,0xFE5F,0xFE3F,0xFDFF,0xFDDF,0xFD9F,0xFD5F,0xFD3F,0x07BF,
0x277F,0x475F,0x671F,0x86FF,0xA6BF,0xC69F,0xE65F,0xFE3F,0xFDFF,0xFDBF,0xFD9F,0xFD5F,0xFD3F,0xFCFF,0xFCDF,0x075F,
0x271F,0x46FF,0x66BF,0x869F,0xA65F,0xC61F,0xE5FF,0xFDBF,0xFD9F,0xFD5F,0xFD3F,0xFCFF,0xFCBF,0xFC9F,0xFC5F,0x06FF,
0x26BF,0x467F,0x665F,0x861F,0xA5FF,0xC5BF,0xE59F,0xFD5F,0xFD1F,0xFCFF,0xFCBF,0xFC9F,0xFC5F,0xFC3F,0xFBFF };
