/* Module: encn3260.dll
   Function: FUN_664b8e40
   Address: 664b8e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_664b8e40(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4,LPRECT param_5)

{
  int iVar1;
  BOOL BVar2;
  
  iVar1 = FUN_664b8c30((int)param_1,param_2);
  if (iVar1 != 0) {
    *param_3 = *(undefined4 *)(param_2 + 4);
    param_3[1] = *(undefined4 *)(param_2 + 8);
    param_3[2] = *(undefined4 *)(param_2 + 0xc);
    param_3[3] = *(undefined4 *)(param_2 + 0x10);
    BVar2 = GetClientRect((HWND)*param_1,param_5);
    if (BVar2 != 0) {
      iVar1 = FUN_664b8c70(&param_5->left);
      if (iVar1 != 0) {
        iVar1 = FUN_664b8c70((int *)(param_2 + 0x14));
        if (((iVar1 != 0) && (iVar1 = *(int *)(param_2 + 0x14), iVar1 < param_5->right)) &&
           (*(int *)(param_2 + 0x18) < param_5->bottom)) {
          *param_4 = iVar1;
          param_4[1] = *(int *)(param_2 + 0x18);
          param_4[2] = *(int *)(param_2 + 0x1c);
          param_4[3] = *(int *)(param_2 + 0x20);
          return 1;
        }
      }
    }
  }
  return 0;
}


