/* Module: pncrt.dll
   Function: remove
   Address: 78019990
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl remove(char *_Filename)

{
  BOOL BVar1;
  uint uVar2;
  
                    /* 0x19990  690  remove */
  BVar1 = DeleteFileA(_Filename);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_7800a870(uVar2);
    return -1;
  }
  return 0;
}


