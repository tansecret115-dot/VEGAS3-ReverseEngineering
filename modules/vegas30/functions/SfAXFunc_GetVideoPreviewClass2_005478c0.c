/* Module: vegas30.exe
   Function: SfAXFunc_GetVideoPreviewClass2
   Address: 005478c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfAXFunc_GetVideoPreviewClass2(class ISfAXVideoPreview * *) */

long SfAXFunc_GetVideoPreviewClass2(ISfAXVideoPreview **param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  undefined4 *unaff_retaddr;
  
                    /* 0x1478c0  16  ?SfAXFunc_GetVideoPreviewClass2@@YGJPAPAVISfAXVideoPreview@@@Z
                        */
  hMem = GlobalAlloc(0x40,0x290);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = (int *)FUN_00544520();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      *unaff_retaddr = piVar2;
      return 0;
    }
  }
  *param_1 = (ISfAXVideoPreview *)0x0;
  return -0x7ff8fff2;
}


