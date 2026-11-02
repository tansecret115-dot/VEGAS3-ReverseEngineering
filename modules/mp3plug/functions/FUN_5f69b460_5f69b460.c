/* Module: mp3plug.dll
   Function: FUN_5f69b460
   Address: 5f69b460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f69b460(void *this,LPSTR param_1,int param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  lstrcpynA(param_1,*(LPCSTR *)((int)this + 0x28),param_2);
  param_1[param_2 + -1] = '\0';
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = *(uint *)((int)this + 0x38);
    if (*param_4 <= (int)uVar2) {
      puVar3 = *(undefined4 **)((int)this + 0x34);
      for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *param_3 = *puVar3;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)param_3 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        param_3 = (undefined4 *)((int)param_3 + 1);
      }
    }
    *param_4 = *(int *)((int)this + 0x38);
    return;
  }
  *param_4 = *(int *)((int)this + 0x38);
  return;
}


