/* Module: rmbe3260.dll
   Function: FUN_6603d180
   Address: 6603d180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6603d180(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfff1;
  if (DAT_66075298 != 0) {
    *(uint *)(param_1 + 8) = DAT_66075278 & 0xffff;
    *(undefined4 *)(param_1 + 0xc) = DAT_66075280;
    *(undefined4 *)(param_1 + 0x10) = DAT_66075284;
    *(undefined4 *)(param_1 + 0x14) = DAT_66075288;
    *(undefined4 *)(param_1 + 0x18) = DAT_6607528c;
    *(undefined4 *)(param_1 + 0x1c) = DAT_66075290;
    *(undefined4 *)(param_1 + 0x20) = DAT_660752ac;
    *(undefined4 *)(param_1 + 0x24) = DAT_6607529c;
    *(undefined4 *)(param_1 + 0x28) = DAT_660752a0;
    *(undefined4 *)(param_1 + 0x2c) = DAT_660752a4;
    *(undefined4 *)(param_1 + 0x30) = DAT_660752a8;
    *(undefined4 *)(param_1 + 0x34) = DAT_660752b0;
    uVar1 = 0;
  }
  return uVar1;
}


