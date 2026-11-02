/* Module: pngu3266.dll
   Function: CompareNoCase
   Address: 605f10b3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNString::CompareNoCase(char const *)const  */

int __thiscall CPNString::CompareNoCase(CPNString *this,char *param_1)

{
  int iVar1;
  
                    /* 0x10b3  874  ?CompareNoCase@CPNString@@QBEHPBD@Z */
  iVar1 = _stricmp(*(char **)this,param_1);
  return iVar1;
}


