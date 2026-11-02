/* Module: sfcdi.dll
   Function: SfCDBurn_Create
   Address: 5bf04350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDBurn_Create(struct HSFBURN__ * *,struct burncreatetag *) */

long SfCDBurn_Create(HSFBURN__ **param_1,burncreatetag *param_2)

{
  uint uVar1;
  HSFCD__ *pHVar2;
  HANDLE pvVar3;
  HSFCD__ *pHVar4;
  byte bVar5;
  uint uVar6;
  HGLOBAL hMem;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  int iVar8;
  LPCRITICAL_SECTION p_Var9;
  
                    /* 0x4350  24  ?SfCDBurn_Create@@YGJPAPAUHSFBURN__@@PAUburncreatetag@@@Z */
  if (param_2 == (burncreatetag *)0x0) {
    return -0x7fffbffd;
  }
  uVar1 = *(uint *)param_2;
  pHVar2 = *(HSFCD__ **)(param_2 + 4);
  if (pHVar2 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  if (*(uint *)(param_2 + 0x1c) == 0) {
    *(undefined4 *)(pHVar2 + 0x2ca) = 0xffff;
  }
  else {
    uVar6 = FUN_5bf01dc0(pHVar2,*(uint *)(param_2 + 0x1c));
    iVar8 = FUN_5bf01d30(uVar6);
    *(int *)(pHVar2 + 0x2ca) = iVar8;
  }
  if (((byte)*param_2 & 0x20) == 0) {
    *(undefined4 *)(pHVar2 + 0x2be) = 0;
  }
  else {
    *(undefined4 *)(pHVar2 + 0x2be) = 1;
  }
  if ((*(uint *)param_2 & 0x400) == 0) {
    *(undefined4 *)(pHVar2 + 0x2c2) = 0;
  }
  else {
    *(undefined4 *)(pHVar2 + 0x2c2) = 1;
  }
  *param_1 = (HSFBURN__ *)0x0;
  hMem = GlobalAlloc(0x42,0x118);
  lpCriticalSection = GlobalLock(hMem);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    return -0x7ff8fff2;
  }
  p_Var9 = lpCriticalSection;
  for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
    p_Var9->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var9 = (LPCRITICAL_SECTION)&p_Var9->LockCount;
  }
  lpCriticalSection[10].DebugInfo = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_2 + 0x24);
  if ((*(uint *)param_2 & 0x200) != 0) {
    lpCriticalSection[10].LockCount = 1;
  }
  if (((byte)*param_2 & 0x40) == 0) {
    pvVar3 = *(HANDLE *)(param_2 + 8);
    lpCriticalSection[4].LockSemaphore = (HANDLE)0x0;
    lpCriticalSection[4].OwningThread = pvVar3;
  }
  else {
    lpCriticalSection[4].OwningThread = (HANDLE)0x0;
    lpCriticalSection[4].LockSemaphore = *(HANDLE *)(param_2 + 0xc);
  }
  if (((byte)*param_2 & 0x80) == 0) {
    lpCriticalSection[5].RecursionCount = 0;
  }
  else {
    lpCriticalSection[5].RecursionCount = *(LONG *)(param_2 + 0x10);
  }
  bVar5 = (byte)*(uint *)param_2;
  if ((bVar5 & 3) == 3) {
    *(undefined1 *)&lpCriticalSection[0xb].RecursionCount = 2;
  }
  else if ((bVar5 & 1) == 1) {
    *(undefined1 *)&lpCriticalSection[0xb].RecursionCount = 0;
  }
  else if ((bVar5 & 2) == 2) {
    *(undefined1 *)&lpCriticalSection[0xb].RecursionCount = 1;
  }
  else if ((*(uint *)param_2 & 0x100) == 0x100) {
    *(undefined1 *)&lpCriticalSection[0xb].RecursionCount = 3;
  }
  lpCriticalSection[4].SpinCount = *(ULONG_PTR *)(param_2 + 4);
  lpCriticalSection[5].DebugInfo = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_2 + 0x14);
  lpCriticalSection[5].LockCount = *(LONG *)(param_2 + 0x18);
  lpCriticalSection[0xb].LockCount = *(LONG *)(param_2 + 0x28);
  lpCriticalSection[0xb].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0xffffffff;
  if (((uVar1 & 0xff) >> 4 & 1) != 0) {
    lpCriticalSection[3].LockSemaphore = (HANDLE)((uint)lpCriticalSection[3].LockSemaphore | 1);
    p_Var7 = CreateFileA(*(LPCSTR *)(param_2 + 0x20),0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                         (HANDLE)0x0);
    lpCriticalSection[0xb].DebugInfo = p_Var7;
    if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)0xffffffff) goto LAB_5bf0457b;
  }
  pHVar4 = (HSFCD__ *)lpCriticalSection[4].SpinCount;
  lpCriticalSection[5].OwningThread = (HANDLE)0x64;
  cdr_GetDeviceCaps(pHVar4,(cdrcaps_tag *)&lpCriticalSection[5].OwningThread);
  *(LPCRITICAL_SECTION *)(pHVar2 + 0x15c) = lpCriticalSection;
  InitializeCriticalSection(lpCriticalSection);
  p_Var7 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  lpCriticalSection[1].DebugInfo = p_Var7;
  if (p_Var7 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    *param_1 = (HSFBURN__ *)lpCriticalSection;
    return 0;
  }
LAB_5bf0457b:
  SfCDBurn_Destroy((HSFBURN__ *)lpCriticalSection);
  return -0x7ff8fff2;
}


