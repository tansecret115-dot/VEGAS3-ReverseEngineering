/* Module: pncrt.dll
   Function: operator==
   Address: 78008200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall type_info::operator==(class type_info const &)const  */

int __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  type_info tVar1;
  type_info *ptVar2;
  type_info *ptVar3;
  bool bVar4;
  
                    /* 0x8200  21  ??8type_info@@QBEHABV0@@Z */
  ptVar3 = this + 9;
  ptVar2 = param_1 + 9;
  while( true ) {
    tVar1 = *ptVar2;
    bVar4 = (byte)tVar1 < (byte)*ptVar3;
    if (tVar1 != *ptVar3) break;
    if (tVar1 == (type_info)0x0) {
      return 1;
    }
    tVar1 = ptVar2[1];
    bVar4 = (byte)tVar1 < (byte)ptVar3[1];
    if (tVar1 != ptVar3[1]) break;
    ptVar2 = ptVar2 + 2;
    ptVar3 = ptVar3 + 2;
    if (tVar1 == (type_info)0x0) {
      return 1;
    }
  }
  return (uint)(1 - bVar4 == (uint)(bVar4 != 0));
}


