/* Module: 28_83260.dll
   Function: FUN_10003890
   Address: 10003890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10003890(void *param_1)

{
  float *pfVar1;
  
  FUN_10003220(param_1,(undefined4 *)((int)param_1 + 0xcc4),(undefined4 *)((int)param_1 + 0xd1c));
  *(undefined4 *)((int)param_1 + 0x1288) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x125c) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x14d0) = 0;
  FUN_100033b0(param_1,(undefined4 *)((int)param_1 + 0xb44));
  *(undefined4 *)((int)param_1 + 0xb44) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x14c8) = 0;
  FUN_10003420(param_1,(undefined4 *)((int)param_1 + 0xc6c));
  FUN_100062e0((int)param_1);
  pfVar1 = (float *)((int)param_1 + 0x1174);
  *(undefined4 *)((int)param_1 + 0x1230) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x1234) = 0xbf800000;
  *(undefined4 *)((int)param_1 + 0x14cc) = 0;
  *(undefined4 **)((int)param_1 + 0x974) = &DAT_1000c3a8;
  *pfVar1 = 0.0;
  *(undefined4 *)((int)param_1 + 0x1178) = 0;
  *(undefined4 *)((int)param_1 + 0x117c) = 0;
  *(undefined4 *)((int)param_1 + 0x1180) = 0;
  *(undefined4 *)((int)param_1 + 0x1184) = 0;
  *pfVar1 = 1.0;
  FUN_10003f80(pfVar1,(float *)((int)param_1 + 0xd74));
  return;
}


