/* Module: pngu3266.dll
   Function: GetData
   Address: 605f106e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: struct CStringData * __thiscall CPNString::GetData(void)const  */

CStringData * __thiscall CPNString::GetData(CPNString *this)

{
                    /* 0x106e  1176  ?GetData@CPNString@@IBEPAUCStringData@@XZ */
  return (CStringData *)(*(int *)this + -0xc);
}


