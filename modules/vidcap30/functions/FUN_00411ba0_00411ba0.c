/* Module: vidcap30.exe
   Function: FUN_00411ba0
   Address: 00411ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411ba0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  HMODULE pHVar4;
  BOOL BVar5;
  HWND hWnd;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  undefined4 unaff_retaddr;
  char *lpClassName;
  tagWNDCLASSA *lpWndClass;
  int *lpParam;
  undefined4 local_38;
  void *local_34;
  tagWNDCLASSA local_30;
  HWND pHStack_4;
  
  local_38 = 0;
  local_34 = (void *)0x0;
  local_30.style = 0;
  piVar1 = calloc(1,8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    if ((param_2 != (int *)0x0) &&
       (iVar2 = (**(code **)(*param_2 + 0x14))(param_2,&local_38), -1 < iVar2)) {
      iVar2 = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0,0,0,0);
      if (-1 < iVar2) {
        (**(code **)(*unaff_EBP + 0x14))(unaff_EBP);
        iVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&stack0xffffffc0,&stack0xffffffc4);
        while ((iVar2 == 0 && (pvVar3 = calloc(1,0x8c), pvVar3 != (void *)0x0))) {
          iVar2 = FUN_00411670(pvVar3,unaff_retaddr,unaff_EBX);
          if (iVar2 < 0) {
            FUN_004115e0(pvVar3);
            free(pvVar3);
          }
          else {
            local_34 = pvVar3;
            _SfList_InsertList_16(*piVar1,0xffffffff,&local_34,1);
          }
          if (unaff_EBX != (int *)0x0) {
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
          }
          unaff_EBX = (int *)0x0;
          iVar2 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,1,&stack0xffffffc4,&local_38);
        }
        if (unaff_EBP != (int *)0x0) {
          (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          unaff_EBP = (int *)0x0;
        }
        lpWndClass = &local_30;
        lpClassName = "GraphDump";
        pHVar4 = GetModuleHandleA((LPCSTR)0x0);
        BVar5 = GetClassInfoA(pHVar4,lpClassName,lpWndClass);
        if (BVar5 == 0) {
          local_30.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
          local_30.hIcon = (HICON)0x0;
          local_30.lpszMenuName = (LPCSTR)0x0;
          local_30.lpszClassName = "GraphDump";
          local_30.hbrBackground = (HBRUSH)0x6;
          local_30.hInstance = GetModuleHandleA((LPCSTR)0x0);
          local_30.style = 0x100b;
          local_30.lpfnWndProc = (WNDPROC)&LAB_00411a50;
          local_30.cbWndExtra = 0;
          local_30.cbClsExtra = 0;
          RegisterClassA(&local_30);
        }
        lpParam = piVar1;
        pHVar4 = GetModuleHandleA((LPCSTR)0x0);
        hWnd = CreateWindowExA(0,"GraphDump","Graph Dump",0x2cf0000,-0x80000000,0,300,400,pHStack_4,
                               (HMENU)0x0,pHVar4,lpParam);
        if (hWnd != (HWND)0x0) {
          ShowWindow(hWnd,5);
          return;
        }
      }
      if (unaff_EBP != (int *)0x0) {
        (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      }
      if ((int *)*piVar1 != (int *)0x0) {
        iVar2 = *(int *)*piVar1;
        while (0 < iVar2) {
          iVar2 = iVar2 + -1;
          pvVar3 = *(void **)(*(int *)(*piVar1 + 8) + iVar2 * 4);
          _SfList_DeleteList_16(*piVar1,iVar2,1,0);
          FUN_004115e0(pvVar3);
          free(pvVar3);
        }
      }
      _SfList_Destroy_4(*piVar1);
    }
  }
  return;
}


