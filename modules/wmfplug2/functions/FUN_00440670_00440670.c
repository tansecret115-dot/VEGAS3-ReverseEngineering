/* Module: wmfplug2.dll
   Function: FUN_00440670
   Address: 00440670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00440670(void *param_1,HANDLE param_2,undefined4 param_3,undefined4 *param_4)

{
  BOOL BVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 uVar6;
  int *unaff_EBX;
  int iVar7;
  undefined4 local_20c;
  DWORD local_208;
  int *local_204;
  int local_200 [127];
  undefined4 *puStack_4;
  
  iVar7 = 0;
  *param_4 = 0;
  local_20c = 0x8004e016;
  local_208 = 0;
  uVar6 = 0x8004e016;
  if (*(int *)((int)param_1 + 0x4c) != 0) {
    SetFilePointer(param_2,0,(PLONG)0x0,0);
    BVar1 = ReadFile(param_2,local_200,0x200,&local_208,(LPOVERLAPPED)0x0);
    if (BVar1 < 0) {
      DVar5 = GetLastError();
      uVar6 = FUN_00427ab0(DVar5);
    }
    else {
      iVar2 = FUN_0043fda0(param_2,local_200,local_208);
      if (iVar2 != 0) {
        return 0x8004e033;
      }
      iVar2 = **(int **)((int)param_1 + 0x4c);
      uVar6 = local_20c;
      if (0 < iVar2) {
        do {
          piVar3 = FUN_0043e760(param_1,*(int *)(*(int *)(*(int *)((int)param_1 + 0x4c) + 8) +
                                                iVar7 * 4),&local_204);
          if ((-1 < (int)piVar3) && (local_204 != (int *)0x0)) {
            iVar4 = (**(code **)(*local_204 + 0x30))(local_204,param_2,local_200,local_208,0);
            if (-1 < iVar4) {
              *puStack_4 = unaff_EBX;
              return 0;
            }
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar2);
        return 0x8004e016;
      }
    }
  }
  return uVar6;
}


