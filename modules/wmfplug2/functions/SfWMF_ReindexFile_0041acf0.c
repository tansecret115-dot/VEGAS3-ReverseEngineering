/* Module: wmfplug2.dll
   Function: SfWMF_ReindexFile
   Address: 0041acf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_ReindexFile(char const *,struct SFASF3_PARAMS *) */

long SfWMF_ReindexFile(char *param_1,SFASF3_PARAMS *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  HANDLE hObject;
  HGLOBAL hMem;
  int *piVar3;
  HANDLE hHandle;
  undefined1 *puVar4;
  DWORD DVar5;
  HANDLE unaff_EDI;
  int *piVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piStack_220;
  int local_21c [4];
  undefined1 auStack_20c [4];
  WCHAR local_208 [246];
  int iStack_1c;
  int iStack_10;
  undefined2 local_2;
  
                    /* 0x1acf0  35  ?SfWMF_ReindexFile@@YGJPBDPAUSFASF3_PARAMS@@@Z */
  MultiByteToWideChar(0,1,param_1,-1,local_208,0x104);
  piVar8 = local_21c;
  local_2 = 0;
  puVar1 = (undefined1 *)WMCreateEditor();
  if (-1 < (int)puVar1) {
    puVar7 = auStack_20c;
    iVar2 = (**(code **)(*piStack_220 + 0xc))();
    if (-1 < iVar2) {
      piVar3 = (int *)&stack0xfffffdd4;
      piVar6 = (int *)&DAT_0047b600;
      iVar2 = (**(code **)*piVar8)(piVar8);
      if (-1 < iVar2) {
        FUN_0041a180(iStack_10,piVar6);
        (**(code **)(*piVar6 + 8))(piVar6);
      }
      (**(code **)(*piVar3 + 0x14))(piVar3);
    }
    (**(code **)(*piVar8 + 8))(piVar8);
    puVar4 = &stack0xfffffddc;
    puVar1 = (undefined1 *)WMCreateIndexer(puVar4);
    if (-1 < (int)puVar1) {
      hObject = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      hMem = GlobalAlloc(0x40,0x28);
      piVar3 = GlobalLock(hMem);
      if (piVar3 != (int *)0x0) {
        piVar3[2] = 1;
        *piVar3 = (int)&PTR_LAB_0047c5b8;
        hHandle = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
        piVar3[4] = (int)&stack0xfffffddc;
        piVar3[6] = 100;
        piVar3[8] = 0;
        piVar3[1] = 0;
        piVar3[3] = (int)hHandle;
        piVar3[7] = 0;
        piVar3[9] = 0;
        puVar4 = (undefined1 *)
                 (**(code **)(*piVar8 + 0xc))(piVar8,local_21c,piVar3,&stack0xfffffdcc);
        puVar1 = puVar7;
        if (-1 < (int)puVar4) {
          if (*(int **)(iStack_1c + 0x14) != (int *)0x0) {
            (**(code **)(**(int **)(iStack_1c + 0x14) + 4))("ReIndexing..",100);
          }
          DVar5 = WaitForSingleObject(unaff_EDI,0);
          puVar1 = puVar7;
          while (DVar5 != 0) {
            WaitForSingleObject(hHandle,0xffffffff);
            ResetEvent(hHandle);
            if ((*(int **)(iStack_1c + 0x14) != (int *)0x0) &&
               (puVar4 = (undefined1 *)(**(code **)(**(int **)(iStack_1c + 0x14) + 8))(hObject),
               (int)puVar4 < 0)) {
              piVar3[1] = 1;
              break;
            }
            DVar5 = WaitForSingleObject(unaff_EDI,0);
          }
          WaitForSingleObject(unaff_EDI,0xffffffff);
        }
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      CloseHandle(hObject);
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 8))(piVar8,puVar4);
      }
    }
  }
  return (long)puVar1;
}


