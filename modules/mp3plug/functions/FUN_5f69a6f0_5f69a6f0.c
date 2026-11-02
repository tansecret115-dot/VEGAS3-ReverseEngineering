/* Module: mp3plug.dll
   Function: FUN_5f69a6f0
   Address: 5f69a6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f69a6f0(void *this,undefined4 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)((int)this + 0xc) + param_3);
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return param_3 + param_2;
}


