/* Module: aviplug.dll
   Function: FUN_5f934230
   Address: 5f934230
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f934230(int param_1)

{
  int *piVar1;
  int iVar2;
  uchar *hObject;
  int iVar3;
  uchar *hObject_00;
  undefined4 *unaff_EBP;
  int unaff_ESI;
  uchar auStack_318 [260];
  WCHAR aWStack_214 [6];
  undefined1 local_208 [520];
  
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x10) != 0)) &&
     (*(int *)(param_1 + 0x14) != 0)) {
    return 0;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x34))
                    (*(int **)(param_1 + 0x18),local_208,0x104);
  if (iVar2 < 0) {
    return iVar2;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = FUN_5f9797b0((int *)(param_1 + 0xc),4,-1,-1,0x80000002);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = FUN_5f9797b0((int *)(param_1 + 0x10),4,-1,-1,0x80000002);
  }
  piVar1 = (int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = FUN_5f9797b0(piVar1,4,-1,-1,0x80000002);
  }
  if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
    WideCharToMultiByte(0,0,aWStack_214,-1,&stack0xfffffbe4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  FUN_5f9338e0(*(int *)(param_1 + 0x18),(undefined4 *)&stack0xfffffbdc);
  if (unaff_ESI == 0) {
    unaff_ESI = 0xac44;
  }
  hObject = CreateFileA(&stack0xfffffbe4,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                        (HANDLE)0x0);
  if (hObject == (uchar *)0xffffffff) {
    return -0x7ffb1ff9;
  }
  FUN_5f98a2c0(hObject,unaff_ESI,(int *)*unaff_EBP);
  FUN_5f98b860(&stack0xfffffbe4,auStack_318,0x104,1);
  iVar3 = FUN_5f98b770(&stack0xfffffbe4,(LPCSTR)auStack_318);
  if (iVar3 == 0) {
    FUN_5f98b860(&stack0xfffffbe4,auStack_318,0x104,0);
    iVar3 = FUN_5f98b770(&stack0xfffffbe4,(LPCSTR)auStack_318);
    if (iVar3 == 0) goto LAB_5f934449;
  }
  hObject_00 = CreateFileA((LPCSTR)auStack_318,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                           (HANDLE)0x0);
  if (hObject_00 != (uchar *)0xffffffff) {
    FUN_5f98a2c0(hObject_00,unaff_ESI,(int *)*unaff_EBP);
    FUN_5f98a790(hObject_00,(int *)*piVar1);
    CloseHandle(hObject_00);
  }
LAB_5f934449:
  FUN_5f98a790(hObject,(int *)*piVar1);
  CloseHandle(hObject);
  return iVar2;
}


