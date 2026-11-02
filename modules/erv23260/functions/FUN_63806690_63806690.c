/* Module: erv23260.dll
   Function: FUN_63806690
   Address: 63806690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63806690(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int local_c;
  
  puVar4 = (undefined4 *)(param_1 + 0x8a0);
  local_c = 1;
  do {
    piVar1 = (int *)*puVar4;
    if (piVar1 != (int *)0x0) {
      FUN_63809540(piVar1);
      FUN_637f2010(piVar1);
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  local_c = 0;
  *(undefined4 *)(param_1 + 0x8b0) = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    puVar4 = (undefined4 *)(param_1 + 0x64c);
    do {
      if ((void *)puVar4[0x5a] != (void *)0x0) {
        FUN_637f1080((void *)puVar4[0x5a]);
        puVar4[0x5a] = 0;
      }
      puVar2 = (undefined4 *)*puVar4;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_63809470(puVar2);
        FUN_637f2010(puVar2);
        *puVar4 = 0;
      }
      if ((undefined4 *)puVar4[0x3f] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar4[0x3f])(1);
        puVar4[0x3f] = 0;
      }
      puVar2 = (undefined4 *)puVar4[0x49];
      if (puVar2 != (undefined4 *)0x0) {
        FUN_63809470(puVar2);
        FUN_637f2010(puVar2);
        puVar4[0x49] = 0;
      }
      puVar2 = (undefined4 *)puVar4[0x4b];
      if (puVar2 != (undefined4 *)0x0) {
        FUN_63809470(puVar2);
        FUN_637f2010(puVar2);
        puVar4[0x4b] = 0;
      }
      puVar2 = (undefined4 *)puVar4[0x4d];
      if (puVar2 != (undefined4 *)0x0) {
        FUN_63809470(puVar2);
        FUN_637f2010(puVar2);
        puVar4[0x4d] = 0;
      }
      if ((void *)puVar4[0x61] != (void *)0x0) {
        FUN_637f2010((void *)puVar4[0x61]);
        puVar4[0x61] = 0;
      }
      (**(code **)(*(int *)puVar4[-1] + 0x10))();
      pvVar3 = (void *)puVar4[2];
      if (pvVar3 != (void *)0x0) {
        FUN_63809810((int)pvVar3);
        FUN_637f2010(pvVar3);
        puVar4[2] = 0;
      }
      pvVar3 = (void *)puVar4[3];
      if (pvVar3 != (void *)0x0) {
        FUN_63809810((int)pvVar3);
        FUN_637f2010(pvVar3);
        puVar4[3] = 0;
      }
      local_c = local_c + 1;
      puVar4 = puVar4 + 0x1df;
    } while (local_c < *(int *)(param_1 + 0x80));
  }
  if (*(void **)(param_1 + 0x8c0) != (void *)0x0) {
    FUN_637f1080(*(void **)(param_1 + 0x8c0));
    *(undefined4 *)(param_1 + 0x8c0) = 0;
  }
  return;
}


