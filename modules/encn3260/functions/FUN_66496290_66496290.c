/* Module: encn3260.dll
   Function: FUN_66496290
   Address: 66496290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66496290(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_14 [2];
  undefined4 local_c;
  undefined2 local_8;
  
  *(undefined2 *)((int)param_1 + 0x70) = *(undefined2 *)((int)param_1 + 0x6e);
  puVar3 = operator_new(0x34);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = FUN_66495f50(param_1,local_14);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    local_c = *(undefined4 *)((int)param_1 + 0x1a2);
    local_8 = *(undefined2 *)((int)param_1 + 0x6a);
    *(undefined2 *)(puVar3 + 1) = *(undefined2 *)((int)param_1 + 0x6e);
    *(undefined2 *)((int)puVar3 + 6) = local_8;
    puVar3[10] = uVar1;
    puVar3[6] = 0;
    puVar3[2] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *puVar3 = &PTR_FUN_664de298;
    puVar3[8] = local_c;
    puVar3[9] = 0;
    puVar3[3] = 0;
    puVar3[7] = 0;
    puVar3[0xb] = uVar2;
    puVar3[0xc] = 1;
    FUN_664c04f0(*(void **)((int)param_1 + 10),puVar3);
    return;
  }
  FUN_664c04f0(*(void **)((int)param_1 + 10),0);
  return;
}


