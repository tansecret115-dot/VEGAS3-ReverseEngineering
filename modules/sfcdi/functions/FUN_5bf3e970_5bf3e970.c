/* Module: sfcdi.dll
   Function: FUN_5bf3e970
   Address: 5bf3e970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf3e970(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_5bf3ce50(param_1,(LPCSTR)0x0);
  iVar1 = *(int *)(param_2 + 0x21c);
  FUN_5bf3dfc0(param_1,param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar2 = FUN_5bf3d640(param_1,param_2);
    return uVar2;
  }
  return 0;
}


