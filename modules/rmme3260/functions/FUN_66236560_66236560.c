/* Module: rmme3260.dll
   Function: FUN_66236560
   Address: 66236560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66236560(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  HWND hWnd;
  undefined4 *puVar4;
  int local_8;
  
  piVar1 = param_2;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x34) + 0x18))(param_2,0);
  if (iVar2 == 0) {
    return 0x80040009;
  }
  (**(code **)*piVar1)(piVar1,&DAT_6626abe8,&param_2);
  puVar3 = (uint *)(**(code **)(*param_2 + 0x1c))(param_2);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (uint *)0x0) {
    hWnd = (HWND)*puVar3;
    FUN_66251030(&DAT_6627cea0,(uint)hWnd,&local_8);
    puVar4 = *(undefined4 **)(local_8 + 0x2c);
    if (puVar4 != (undefined4 *)0x0) {
      hWnd = (HWND)*puVar4;
    }
    (**(code **)(*(int *)(local_8 + 8) + 0x10))(local_8 + 8);
    DestroyWindow(hWnd);
  }
  if ((*(byte *)(param_1 + 0x5c) & 0x10) == 0) {
    (**(code **)(*(int *)(param_1 + 0x34) + 0xc))(iVar2);
  }
  (**(code **)(*param_2 + 8))(param_2);
  (**(code **)(*piVar1 + 8))(piVar1);
  if (puVar4 != (undefined4 *)0x0) {
    operator_delete(puVar4);
  }
  FUN_66237a50();
  return 0;
}


