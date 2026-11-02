/* Module: rmbe3260.dll
   Function: FUN_6603d2e0
   Address: 6603d2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6603d2e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  LONG LVar4;
  int iVar5;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  int local_8;
  
  *param_1 = &PTR_FUN_66067fa0;
  iVar2 = param_1[3];
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      operator_delete(*(void **)(param_1[2] + iVar5 * 4));
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17])(1);
  }
  puVar1 = param_1 + 0x19;
  local_14 = -(uint)(param_1[0x1b] != 0);
  local_c = (void *)0x0;
  local_8 = 0;
  local_10 = puVar1;
  while (local_14 != 0) {
    FUN_6605f140(local_10,&local_14,&local_8,(int *)&local_c);
    pvVar3 = local_c;
    if ((local_c != (void *)0x0) &&
       (LVar4 = InterlockedDecrement((LONG *)((int)local_c + 0xc)), LVar4 < 1)) {
      operator_delete(pvVar3);
    }
  }
  FUN_6605efb0(puVar1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  thunk_FUN_6605efb0(puVar1);
  FUN_6605b770(param_1 + 0x13);
  FUN_6605b770(param_1 + 0x10);
  FUN_6605b770(param_1 + 0xd);
  FUN_6605b770(param_1 + 10);
  FUN_6605cdb0(param_1 + 2);
  *param_1 = &PTR_FUN_66067fa8;
  return;
}


