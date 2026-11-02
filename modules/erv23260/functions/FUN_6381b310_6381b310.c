/* Module: erv23260.dll
   Function: FUN_6381b310
   Address: 6381b310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6381b310(void)

{
  int *in_stack_00000060;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_00000098;
  int in_stack_0000009c;
  int in_stack_000000a0;
  int in_stack_000000a4;
  int in_stack_000000a8;
  int in_stack_000000ac;
  int in_stack_000000b0;
  int in_stack_000000b4;
  int in_stack_000000b8;
  int in_stack_000000bc;
  int in_stack_000000c0;
  int in_stack_000000c4;
  int in_stack_000000c8;
  int in_stack_000000cc;
  int in_stack_000000d0;
  int in_stack_000000d4;
  int in_stack_000000d8;
  int in_stack_000000dc;
  int in_stack_000000e0;
  int in_stack_000000e4;
  int in_stack_000000e8;
  int in_stack_000000ec;
  int in_stack_000000f0;
  int in_stack_000000f4;
  int in_stack_000000f8;
  int in_stack_000000fc;
  int in_stack_00000100;
  int in_stack_00000104;
  int in_stack_00000108;
  int in_stack_0000010c;
  int in_stack_00000110;
  int in_stack_00000114;
  int in_stack_00000118;
  int in_stack_0000011c;
  int in_stack_00000120;
  int in_stack_00000124;
  int in_stack_00000128;
  int in_stack_0000012c;
  int in_stack_00000130;
  int in_stack_00000134;
  int in_stack_00000138;
  int in_stack_0000013c;
  int in_stack_00000140;
  int in_stack_00000144;
  int in_stack_00000148;
  int in_stack_0000014c;
  int in_stack_00000150;
  int in_stack_00000154;
  int in_stack_00000158;
  int in_stack_0000015c;
  int in_stack_00000160;
  int in_stack_00000164;
  int in_stack_00000168;
  int in_stack_0000016c;
  int in_stack_00000170;
  int in_stack_00000174;
  int in_stack_00000178;
  int in_stack_0000017c;
  int in_stack_00000180;
  
  *in_stack_00000060 =
       in_stack_00000084 + in_stack_000000c4 + in_stack_00000104 + in_stack_00000144 >> 0xd;
  in_stack_00000060[7] =
       (in_stack_00000084 + in_stack_000000c4) - (in_stack_00000104 + in_stack_00000144) >> 0xd;
  in_stack_00000060[0x38] =
       (in_stack_00000084 - in_stack_000000c4) + (in_stack_00000104 - in_stack_00000144) >> 0xd;
  in_stack_00000060[0x3f] =
       (in_stack_00000084 - in_stack_000000c4) - (in_stack_00000104 - in_stack_00000144) >> 0xd;
  in_stack_00000060[1] =
       in_stack_00000088 + in_stack_000000c8 + in_stack_00000108 + in_stack_00000148 >> 0xd;
  in_stack_00000060[6] =
       (in_stack_00000088 + in_stack_000000c8) - (in_stack_00000108 + in_stack_00000148) >> 0xd;
  in_stack_00000060[0x39] =
       (in_stack_00000088 - in_stack_000000c8) + (in_stack_00000108 - in_stack_00000148) >> 0xd;
  in_stack_00000060[0x3e] =
       (in_stack_00000088 - in_stack_000000c8) - (in_stack_00000108 - in_stack_00000148) >> 0xd;
  in_stack_00000060[2] =
       in_stack_0000008c + in_stack_000000cc + in_stack_0000010c + in_stack_0000014c >> 0xd;
  in_stack_00000060[5] =
       (in_stack_0000008c + in_stack_000000cc) - (in_stack_0000010c + in_stack_0000014c) >> 0xd;
  in_stack_00000060[0x3a] =
       (in_stack_0000008c - in_stack_000000cc) + (in_stack_0000010c - in_stack_0000014c) >> 0xd;
  in_stack_00000060[0x3d] =
       (in_stack_0000008c - in_stack_000000cc) - (in_stack_0000010c - in_stack_0000014c) >> 0xd;
  in_stack_00000060[3] =
       in_stack_00000090 + in_stack_000000d0 + in_stack_00000110 + in_stack_00000150 >> 0xd;
  in_stack_00000060[4] =
       (in_stack_00000090 + in_stack_000000d0) - (in_stack_00000110 + in_stack_00000150) >> 0xd;
  in_stack_00000060[0x3b] =
       (in_stack_00000090 - in_stack_000000d0) + (in_stack_00000110 - in_stack_00000150) >> 0xd;
  in_stack_00000060[0x3c] =
       (in_stack_00000090 - in_stack_000000d0) - (in_stack_00000110 - in_stack_00000150) >> 0xd;
  in_stack_00000060[8] =
       in_stack_00000094 + in_stack_000000d4 + in_stack_00000114 + in_stack_00000154 >> 0xd;
  in_stack_00000060[0xf] =
       (in_stack_00000094 + in_stack_000000d4) - (in_stack_00000114 + in_stack_00000154) >> 0xd;
  in_stack_00000060[0x30] =
       (in_stack_00000094 - in_stack_000000d4) + (in_stack_00000114 - in_stack_00000154) >> 0xd;
  in_stack_00000060[0x37] =
       (in_stack_00000094 - in_stack_000000d4) - (in_stack_00000114 - in_stack_00000154) >> 0xd;
  in_stack_00000060[9] =
       in_stack_00000098 + in_stack_000000d8 + in_stack_00000118 + in_stack_00000158 >> 0xd;
  in_stack_00000060[0xe] =
       (in_stack_00000098 + in_stack_000000d8) - (in_stack_00000118 + in_stack_00000158) >> 0xd;
  in_stack_00000060[0x31] =
       (in_stack_00000098 - in_stack_000000d8) + (in_stack_00000118 - in_stack_00000158) >> 0xd;
  in_stack_00000060[0x36] =
       (in_stack_00000098 - in_stack_000000d8) - (in_stack_00000118 - in_stack_00000158) >> 0xd;
  in_stack_00000060[10] =
       in_stack_0000009c + in_stack_000000dc + in_stack_0000011c + in_stack_0000015c >> 0xd;
  in_stack_00000060[0xd] =
       (in_stack_0000009c + in_stack_000000dc) - (in_stack_0000011c + in_stack_0000015c) >> 0xd;
  in_stack_00000060[0x32] =
       (in_stack_0000009c - in_stack_000000dc) + (in_stack_0000011c - in_stack_0000015c) >> 0xd;
  in_stack_00000060[0x35] =
       (in_stack_0000009c - in_stack_000000dc) - (in_stack_0000011c - in_stack_0000015c) >> 0xd;
  in_stack_00000060[0xb] =
       in_stack_000000a0 + in_stack_000000e0 + in_stack_00000120 + in_stack_00000160 >> 0xd;
  in_stack_00000060[0xc] =
       (in_stack_000000a0 + in_stack_000000e0) - (in_stack_00000120 + in_stack_00000160) >> 0xd;
  in_stack_00000060[0x33] =
       (in_stack_000000a0 - in_stack_000000e0) + (in_stack_00000120 - in_stack_00000160) >> 0xd;
  in_stack_00000060[0x34] =
       (in_stack_000000a0 - in_stack_000000e0) - (in_stack_00000120 - in_stack_00000160) >> 0xd;
  in_stack_00000060[0x10] =
       in_stack_000000a4 + in_stack_000000e4 + in_stack_00000124 + in_stack_00000164 >> 0xd;
  in_stack_00000060[0x17] =
       (in_stack_000000a4 + in_stack_000000e4) - (in_stack_00000124 + in_stack_00000164) >> 0xd;
  in_stack_00000060[0x28] =
       (in_stack_000000a4 - in_stack_000000e4) + (in_stack_00000124 - in_stack_00000164) >> 0xd;
  in_stack_00000060[0x2f] =
       (in_stack_000000a4 - in_stack_000000e4) - (in_stack_00000124 - in_stack_00000164) >> 0xd;
  in_stack_00000060[0x11] =
       in_stack_000000a8 + in_stack_000000e8 + in_stack_00000128 + in_stack_00000168 >> 0xd;
  in_stack_00000060[0x16] =
       (in_stack_000000a8 + in_stack_000000e8) - (in_stack_00000128 + in_stack_00000168) >> 0xd;
  in_stack_00000060[0x29] =
       (in_stack_000000a8 - in_stack_000000e8) + (in_stack_00000128 - in_stack_00000168) >> 0xd;
  in_stack_00000060[0x2e] =
       (in_stack_000000a8 - in_stack_000000e8) - (in_stack_00000128 - in_stack_00000168) >> 0xd;
  in_stack_00000060[0x12] =
       in_stack_000000ac + in_stack_000000ec + in_stack_0000012c + in_stack_0000016c >> 0xd;
  in_stack_00000060[0x15] =
       (in_stack_000000ac + in_stack_000000ec) - (in_stack_0000012c + in_stack_0000016c) >> 0xd;
  in_stack_00000060[0x2a] =
       (in_stack_000000ac - in_stack_000000ec) + (in_stack_0000012c - in_stack_0000016c) >> 0xd;
  in_stack_00000060[0x2d] =
       (in_stack_000000ac - in_stack_000000ec) - (in_stack_0000012c - in_stack_0000016c) >> 0xd;
  in_stack_00000060[0x13] =
       in_stack_000000b0 + in_stack_000000f0 + in_stack_00000130 + in_stack_00000170 >> 0xd;
  in_stack_00000060[0x14] =
       (in_stack_000000b0 + in_stack_000000f0) - (in_stack_00000130 + in_stack_00000170) >> 0xd;
  in_stack_00000060[0x2b] =
       (in_stack_000000b0 - in_stack_000000f0) + (in_stack_00000130 - in_stack_00000170) >> 0xd;
  in_stack_00000060[0x2c] =
       (in_stack_000000b0 - in_stack_000000f0) - (in_stack_00000130 - in_stack_00000170) >> 0xd;
  in_stack_00000060[0x18] =
       in_stack_000000b4 + in_stack_000000f4 + in_stack_00000134 + in_stack_00000174 >> 0xd;
  in_stack_00000060[0x1f] =
       (in_stack_000000b4 + in_stack_000000f4) - (in_stack_00000134 + in_stack_00000174) >> 0xd;
  in_stack_00000060[0x20] =
       (in_stack_000000b4 - in_stack_000000f4) + (in_stack_00000134 - in_stack_00000174) >> 0xd;
  in_stack_00000060[0x27] =
       (in_stack_000000b4 - in_stack_000000f4) - (in_stack_00000134 - in_stack_00000174) >> 0xd;
  in_stack_00000060[0x19] =
       in_stack_000000b8 + in_stack_000000f8 + in_stack_00000138 + in_stack_00000178 >> 0xd;
  in_stack_00000060[0x1e] =
       (in_stack_000000b8 + in_stack_000000f8) - (in_stack_00000138 + in_stack_00000178) >> 0xd;
  in_stack_00000060[0x21] =
       (in_stack_000000b8 - in_stack_000000f8) + (in_stack_00000138 - in_stack_00000178) >> 0xd;
  in_stack_00000060[0x26] =
       (in_stack_000000b8 - in_stack_000000f8) - (in_stack_00000138 - in_stack_00000178) >> 0xd;
  in_stack_00000060[0x1a] =
       in_stack_000000bc + in_stack_000000fc + in_stack_0000013c + in_stack_0000017c >> 0xd;
  in_stack_00000060[0x1d] =
       (in_stack_000000bc + in_stack_000000fc) - (in_stack_0000013c + in_stack_0000017c) >> 0xd;
  in_stack_00000060[0x22] =
       (in_stack_000000bc - in_stack_000000fc) + (in_stack_0000013c - in_stack_0000017c) >> 0xd;
  in_stack_00000060[0x25] =
       (in_stack_000000bc - in_stack_000000fc) - (in_stack_0000013c - in_stack_0000017c) >> 0xd;
  in_stack_00000060[0x1b] =
       in_stack_000000c0 + in_stack_00000100 + in_stack_00000140 + in_stack_00000180 >> 0xd;
  in_stack_00000060[0x1c] =
       (in_stack_000000c0 + in_stack_00000100) - (in_stack_00000140 + in_stack_00000180) >> 0xd;
  in_stack_00000060[0x23] =
       (in_stack_000000c0 - in_stack_00000100) + (in_stack_00000140 - in_stack_00000180) >> 0xd;
  in_stack_00000060[0x24] =
       (in_stack_000000c0 - in_stack_00000100) - (in_stack_00000140 - in_stack_00000180) >> 0xd;
  return;
}


