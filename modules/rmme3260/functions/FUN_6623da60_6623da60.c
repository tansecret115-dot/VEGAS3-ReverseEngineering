/* Module: rmme3260.dll
   Function: FUN_6623da60
   Address: 6623da60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623da60(int param_1,char *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  
  pvVar1 = *(void **)(param_1 + 0x58);
  if ((void *)(param_1 + -0x14) != pvVar1) {
    (**(code **)(*(int *)((int)pvVar1 + 0x14) + 0xc))((int)pvVar1 + 0x14,param_2);
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 100) == 0) {
      puVar2 = operator_new(0x54);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_66245630(puVar2);
      }
      *(undefined4 **)(param_1 + 100) = puVar2;
      FUN_66245ae0(puVar2,*(HWND *)(param_1 + 0x130));
      FUN_66245c10(*(int **)(param_1 + 100));
    }
    FUN_66245780(*(void **)(param_1 + 100),param_2);
    return 0;
  }
  DVar3 = GetTickCount();
  *(DWORD *)(param_1 + 0x68) = DVar3;
  FUN_66240340((void *)(param_1 + -0x14),2,100);
  return 0;
}


