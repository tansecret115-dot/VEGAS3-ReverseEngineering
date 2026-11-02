/* Module: encn3260.dll
   Function: FUN_664a06e0
   Address: 664a06e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a06e0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  void *this;
  HINSTANCE hInstance;
  HWND pHVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  LPVOID lpParam;
  
  piVar2 = param_1;
  piVar1 = param_1 + -1;
  FUN_664a1d20();
  this = operator_new(0x11d);
  if (this == (void *)0x0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = FUN_6649eeb0(this,(int *)param_1[9],0);
  }
  FUN_6649f670(param_1,piVar1);
  piVar1 = param_1 + 6;
  (**(code **)(param_1[6] + 0x10))(piVar1,*(undefined4 *)((int)piVar2 + 0x92));
  (**(code **)(*piVar1 + 0x18))(piVar1,*(undefined4 *)((int)piVar2 + 0x8e));
  (**(code **)(*piVar1 + 0x20))(piVar1,*(undefined4 *)((int)piVar2 + 0x8a));
  (**(code **)(*piVar1 + 0x28))(piVar1,*(undefined4 *)((int)piVar2 + 0x86));
  (**(code **)(*piVar1 + 0x30))(piVar1,*(undefined4 *)((int)piVar2 + 0x82));
  (**(code **)param_1[1])(param_1 + 1,&DAT_664dcdc0,param_2);
  if (*(int *)((int)piVar2 + 0x10d) == 0) {
    if (*(int *)((int)piVar2 + 0x5e) == 0) {
      puVar5 = operator_new(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_664c3a90(puVar5);
      }
      *(undefined4 *)((int)piVar2 + 0x5e) = uVar6;
    }
    FUN_664c3c20(*(void **)((int)piVar2 + 0x5e),*(int *)((int)*(void **)((int)piVar2 + 0x5e) + 4),
                 param_1);
  }
  else {
    lpParam = (LPVOID)0x0;
    hInstance = (HINSTANCE)FUN_664b0670();
    pHVar3 = CreateWindowExA(0,s_CPNSiteWindowed_664e32b0,&DAT_664f05c4,0x56000000,0,0,0,0,
                             *(HWND *)((int)piVar2 + 0x10d),(HMENU)0x0,hInstance,lpParam);
    puVar4 = operator_new(0x24);
    puVar5 = puVar4;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *puVar4 = pHVar3;
    (**(code **)(param_1[2] + 0xc))(param_1 + 2,puVar4);
    (**(code **)(*(int *)*param_2 + 4))((int *)*param_2);
    FUN_664a1e20(piVar2 + -1,*param_2,-1);
  }
  iVar7 = (**(code **)(piVar2[2] + 0x18))(piVar2 + 2);
  if (iVar7 != 0) {
    (**(code **)(param_1[3] + 0xc))(param_1 + 3);
  }
  if (*(int **)((int)piVar2 + 0x7a) != (int *)0x0) {
    FUN_664b07b0(*(int **)((int)piVar2 + 0x7a));
  }
  if (*(int **)((int)piVar2 + 0x7e) != (int *)0x0) {
    FUN_664b07b0(*(int **)((int)piVar2 + 0x7e));
  }
  return 0;
}


