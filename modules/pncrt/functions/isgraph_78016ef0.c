/* Module: pncrt.dll
   Function: isgraph
   Address: 78016ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl isgraph(int _C)

{
  int iVar1;
  
                    /* 0x16ef0  638  isgraph */
  if (1 < __mb_cur_max) {
    iVar1 = _isctype(_C,0x117);
    return iVar1;
  }
  return *(ushort *)(_pctype + _C * 2) & 0x117;
}


