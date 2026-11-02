/* Module: rmme3260.dll
   Function: FUN_66266b30
   Address: 66266b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66266b30(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_c [2];
  
  FUN_66266bb0((int)local_c,param_2 + 4,(undefined1 *)0x8);
  uVar1 = (uint)param_2[4] >> 3 & 0x3f;
  iVar2 = 0x38;
  if (0x37 < uVar1) {
    iVar2 = 0x78;
  }
  FUN_66266a70(param_2,(undefined4 *)&DAT_6627cd40,iVar2 - uVar1);
  FUN_66266a70(param_2,local_c,8);
  FUN_66266bb0(param_1,param_2,(undefined1 *)0x10);
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  return;
}


