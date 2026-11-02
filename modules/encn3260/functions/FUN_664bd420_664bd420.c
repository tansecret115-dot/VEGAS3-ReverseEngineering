/* Module: encn3260.dll
   Function: FUN_664bd420
   Address: 664bd420
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664bd420(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_1c [3];
  int local_10 [3];
  
  puVar1 = (undefined4 *)FUN_664be280((int)this);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_664bb5e0(param_1,&DAT_664f05c4);
  }
  else {
    if (*(int *)((int)this + 0x1c) == 0) {
      puVar2 = FUN_664bb450(local_1c,s_smpte__664ef760);
      piVar3 = FUN_664bb670(local_10,puVar2,puVar1);
      FUN_664bb570(param_1,piVar3);
      FUN_664bb3e0(local_10);
      FUN_664bb3e0(local_1c);
      return;
    }
    if (*(int *)((int)this + 0x1c) == 2) {
      puVar2 = FUN_664bb450(local_10,&DAT_664ef758);
      piVar3 = FUN_664bb670(local_1c,puVar2,puVar1);
      FUN_664bb570(param_1,piVar3);
      FUN_664bb3e0(local_1c);
      FUN_664bb3e0(local_10);
      return;
    }
  }
  return;
}


