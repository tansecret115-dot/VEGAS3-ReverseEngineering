/* Module: wmfplug2.dll
   Function: SfWMF_GetReader
   Address: 004182d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_GetReader(char const *,class CFileIO * *,unsigned long) */

long SfWMF_GetReader(char *param_1,CFileIO **param_2,ulong param_3)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  CFileIO *pCVar2;
  int iVar3;
  
                    /* 0x182d0  21  ?SfWMF_GetReader@@YGJPBDPAPAVCFileIO@@K@Z */
  iVar3 = 0;
  hMem = GlobalAlloc(0x40,0x90);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    pCVar2 = (CFileIO *)FUN_0041b430(puVar1);
    if (pCVar2 != (CFileIO *)0x0) {
      if (param_1 != (char *)0x0) {
        iVar3 = (**(code **)(*(int *)pCVar2 + 0xc))(param_1,param_3);
        if (iVar3 < 0) {
          (*(code *)**(undefined4 **)pCVar2)(1);
          return iVar3;
        }
      }
      (**(code **)(*(int *)pCVar2 + 4))();
      *param_2 = pCVar2;
      return iVar3;
    }
  }
  return -0x7ff8fff2;
}


