/* Module: vidcap30.exe
   Function: FUN_00455d70
   Address: 00455d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455d70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00455dd0(param_1 + 0x400,1,FUN_004347d0,param_2,&DAT_005bb32c);
  iVar2 = FUN_00455dd0(param_1 + 0x50c,0,FUN_00434850,param_3,&DAT_005bb228);
  if ((iVar1 != 0) || (iVar2 != 0)) {
    FUN_004347a0(*(undefined4 *)(DAT_005ba4c0 + 0x6c));
  }
  return;
}


