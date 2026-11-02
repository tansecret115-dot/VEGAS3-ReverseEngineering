/* Module: vegas30.exe
   Function: FUN_005f51d0
   Address: 005f51d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f51d0(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  void *_Memory;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_EBX;
  int *piVar4;
  undefined4 local_138;
  int *local_134;
  int local_130;
  undefined1 local_12c [40];
  undefined1 local_104 [236];
  undefined4 *puStack_18;
  undefined4 *puStack_4;
  
  if (param_3 == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_3 = 0;
  _Memory = calloc(1,0x80);
  if (_Memory == (void *)0x0) {
    return -0x7ff8fff2;
  }
  iVar1 = _SfVideoFilterCache_Init_24(_Memory,param_2,0xb,DAT_0064b50c,0,1);
  if (iVar1 < 0) {
    _SfGuidToString_12(param_2,local_12c,0x28);
    SfErrorHandler_DetailsAddString(0x8004e084,"%s - %s",local_12c,"Media Generator");
    free(_Memory);
    return iVar1;
  }
  _SfVideoPlugin_GetInterface_12(&DAT_006335c8,&local_134,*(undefined4 *)((int)_Memory + 0x10));
  if (local_134 != (int *)0x0) {
    local_138 = 0x104;
    iVar2 = FUN_00449b50(*(undefined4 *)((int)_Memory + 0x10),local_134,
                         ((int)param_4 < 0) - 1 & param_4,local_104,&local_138);
    if (-1 < iVar2) {
      FUN_00449cd0(*(undefined4 *)((int)_Memory + 0x10),local_134,local_104);
      local_138 = 0x104;
    }
    (**(code **)(*local_134 + 8))(local_134);
  }
  piVar4 = &local_130;
  iVar2 = (**(code **)**(undefined4 **)((int)_Memory + 0x10))
                    (*(undefined4 **)((int)_Memory + 0x10),&DAT_0062c9e0);
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x80) = 1;
    if ((*(byte *)((int)_Memory + 0x78) & 4) == 0) {
      uVar3 = ftol();
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 100) = uVar3;
      *(undefined4 *)(param_1 + 0x2c) = 0x3ff00000;
    }
    iVar1 = (**(code **)(*unaff_EBX + 0xc))
                      (unaff_EBX,*(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c),
                       *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60),1);
    (**(code **)(*piVar4 + 8))(piVar4);
    *puStack_18 = _Memory;
    return iVar1;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *puStack_4 = _Memory;
  return iVar1;
}


