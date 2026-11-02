/* Module: sfcdi.dll
   Function: SfChangeOutputName
   Address: 5bf1ce10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfChangeOutputName(char *,char *) */

void SfChangeOutputName(char *param_1,char *param_2)

{
  int iVar1;
  uchar local_104 [260];
  
                    /* 0x1ce10  77  ?SfChangeOutputName@@YGXPAD0@Z */
  _mbscpy(local_104,(uchar *)param_1);
  iVar1 = lstrlenA((LPCSTR)local_104);
  if (iVar1 != 0) {
    FUN_5bf1cdb0(local_104,(uchar *)param_1);
    _mbscpy((uchar *)param_1,local_104);
    _mbscat((uchar *)param_1,(uchar *)param_2);
  }
  return;
}


