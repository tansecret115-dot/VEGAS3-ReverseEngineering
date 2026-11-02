/* Module: oggplug.dll
   Function: FUN_00403190
   Address: 00403190
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403190(int param_1)

{
  int iVar1;
  undefined4 *hObject;
  undefined1 local_208 [520];
  
  if (*(int *)(param_1 + 0x30) != 0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x34))
                    (*(int **)(param_1 + 0x24),local_208,0x104);
  if (-1 < iVar1) {
    hObject = FUN_00402dd0((LPCWSTR)&stack0xfffffdec);
    if (hObject != (undefined4 *)0xffffffff) {
      iVar1 = FUN_004140e0((int *)(param_1 + 0x30),4,-1,-1,0x80000002);
      if (-1 < iVar1) {
        iVar1 = FUN_004167b0(hObject,(uint *)(param_1 + 0x54),(undefined4 *)(param_1 + 0x6c),
                             (int *)(param_1 + 0x34),*(int **)(param_1 + 0x30),
                             (undefined4 *)(param_1 + 0x50),param_1 + 0x78,*(uint *)(param_1 + 0x70)
                             ,*(int *)(param_1 + 0x74));
      }
      CloseHandle(hObject);
    }
  }
  return iVar1;
}


