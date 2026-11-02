/* Module: rmto3260.dll
   Function: FUN_662cfe30
   Address: 662cfe30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662cfe30(void *this,undefined4 *param_1,uint param_2,char *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_2 & 0xffff;
  puVar1 = operator_new(uVar3 + 1);
  if (puVar1 == (undefined4 *)0x0) {
    return 2;
  }
  if ((short)param_2 != 0) {
    puVar4 = puVar1;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  *(undefined1 *)((int)puVar1 + uVar3) = 0;
  FUN_662f0810(*(int **)((int)this + 0x28),param_3);
  operator_delete(puVar1);
  return 0;
}


