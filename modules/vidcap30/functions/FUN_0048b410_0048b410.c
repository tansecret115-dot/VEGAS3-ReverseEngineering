/* Module: vidcap30.exe
   Function: FUN_0048b410
   Address: 0048b410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048b410(int param_1,HANDLE param_2,undefined4 param_3,undefined4 *param_4)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int *unaff_EBX;
  int iVar6;
  undefined4 local_20c;
  DWORD local_208;
  int *local_204;
  undefined1 local_200 [508];
  undefined4 *puStack_4;
  
  iVar6 = 0;
  *param_4 = 0;
  local_20c = 0x8004e016;
  local_208 = 0;
  uVar5 = 0x8004e016;
  if (*(int *)(param_1 + 0x4c) != 0) {
    SetFilePointer(param_2,0,(PLONG)0x0,0);
    BVar1 = ReadFile(param_2,local_200,0x200,&local_208,(LPOVERLAPPED)0x0);
    if (BVar1 < 0) {
      DVar4 = GetLastError();
      uVar5 = _SfErrorHandler_TranslateWin32Error_4(DVar4);
    }
    else {
      iVar2 = FUN_0048ab40(param_2,local_200,local_208,0);
      if (iVar2 != 0) {
        return 0x8004e033;
      }
      iVar2 = **(int **)(param_1 + 0x4c);
      uVar5 = local_20c;
      if (0 < iVar2) {
        do {
          iVar3 = FUN_00489500(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + iVar6 * 4),
                               &local_204);
          if ((-1 < iVar3) && (local_204 != (int *)0x0)) {
            iVar3 = (**(code **)(*local_204 + 0x30))(local_204,param_2,local_200,local_208,0);
            if (-1 < iVar3) {
              *puStack_4 = unaff_EBX;
              return 0;
            }
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
        return 0x8004e016;
      }
    }
  }
  return uVar5;
}


