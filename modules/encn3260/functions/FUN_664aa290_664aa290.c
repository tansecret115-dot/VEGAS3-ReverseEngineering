/* Module: encn3260.dll
   Function: FUN_664aa290
   Address: 664aa290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664aa290(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *local_c;
  uint local_8;
  
  uVar3 = 0;
  local_8 = 0;
  FUN_664b43a0(*(void **)((int)param_1 + 0x140),local_c,(int *)&local_8);
  puVar1 = operator_new(local_8 << 4);
  FUN_664b43a0(*(void **)((int)param_1 + 0x140),puVar1,(int *)&local_8);
  if (local_8 != 0) {
    puVar4 = puVar1 + 1;
    do {
      if ((((0x13f < puVar4[-1]) && (199 < *puVar4)) && (7 < puVar4[1])) &&
         (iVar2 = FUN_664aa350(param_1,puVar4[-1],*puVar4,puVar4[1]), iVar2 == 0)) {
        FUN_664aa400(param_1,puVar4[-1],*puVar4,puVar4[1],0,0,0);
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar3 < local_8);
  }
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete(puVar1);
  }
  return;
}


