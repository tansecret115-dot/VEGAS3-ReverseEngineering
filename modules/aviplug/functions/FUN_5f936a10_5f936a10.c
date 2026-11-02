/* Module: aviplug.dll
   Function: FUN_5f936a10
   Address: 5f936a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f936a10(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_4;
  
  uVar3 = 0;
  local_4 = 0;
  if (1 < param_2) {
    return 0x80004002;
  }
  if (param_2 == 1) {
    piVar1 = (int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      pvVar4 = GlobalAlloc(0x40,0xd0);
      pvVar5 = GlobalLock(pvVar4);
      if (pvVar5 == (LPVOID)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_5f95b2c0(pvVar5,param_1,&local_4,1,piVar1,*(undefined4 *)(param_1 + 0x2c));
      }
      *piVar1 = iVar6;
      if (iVar6 == 0) {
        return 0x8007000e;
      }
    }
    uVar3 = (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_5f9eee48,param_3);
    return uVar3;
  }
  if (param_2 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 0x3c) == 0) {
      pvVar4 = GlobalAlloc(0x40,0x100);
      pvVar5 = GlobalLock(pvVar4);
      if (pvVar5 == (LPVOID)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = FUN_5f95de30(pvVar5,param_1,&local_4,0,puVar2,*(undefined4 *)(param_1 + 0x2c));
      }
      *puVar2 = puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
    }
    uVar3 = (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2,&DAT_5f9eee48,param_3);
  }
  return uVar3;
}


