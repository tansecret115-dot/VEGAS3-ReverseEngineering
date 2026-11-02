/* Module: wmfplug2.dll
   Function: SfWMF_IsFile
   Address: 00418240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfWMF_IsFile(char const *) */

int SfWMF_IsFile(char *param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  WCHAR local_208 [259];
  undefined2 local_2;
  
                    /* 0x18240  30  ?SfWMF_IsFile@@YGHPBD@Z */
  hMem = GlobalAlloc(0x40,0x70);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)FUN_00401c00(puVar1);
    if (piVar2 != (int *)0x0) {
      MultiByteToWideChar(0,1,param_1,-1,local_208,0x104);
      local_2 = 0;
      iVar3 = (**(code **)(*piVar2 + 0x30))(piVar2,local_208);
      if (iVar3 == 0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        return 1;
      }
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return 0;
}


