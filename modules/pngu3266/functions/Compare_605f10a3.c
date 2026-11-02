/* Module: pngu3266.dll
   Function: Compare
   Address: 605f10a3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNString::Compare(char const *)const  */

int __thiscall CPNString::Compare(CPNString *this,char *param_1)

{
  int iVar1;
  
                    /* 0x10a3  873  ?Compare@CPNString@@QBEHPBD@Z */
  iVar1 = strcmp(*(char **)this,param_1);
  return iVar1;
}


