/* Module: mp3plug.dll
   Function: FUN_5f6869b0
   Address: 5f6869b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6869b0(uint param_1,LPSTR param_2,SIZE_T param_3)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff) + 1000;
  *param_2 = '\0';
  if (0x465 < uVar1) {
    return 0x80070057;
  }
  FUN_5f69dd80(DAT_5f74d2f4,uVar1,param_2,param_3);
  return 0;
}


