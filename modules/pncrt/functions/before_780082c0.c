/* Module: pncrt.dll
   Function: before
   Address: 780082c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall type_info::before(class type_info const &)const  */

int __thiscall type_info::before(type_info *this,type_info *param_1)

{
  type_info tVar1;
  uint uVar2;
  uint uVar3;
  type_info *ptVar4;
  type_info *ptVar5;
  bool bVar6;
  
                    /* 0x82c0  40  ?before@type_info@@QBEHABV1@@Z */
  ptVar5 = this + 9;
  ptVar4 = param_1 + 9;
  while( true ) {
    tVar1 = *ptVar4;
    bVar6 = (byte)tVar1 < (byte)*ptVar5;
    if (tVar1 != *ptVar5) break;
    if (tVar1 == (type_info)0x0) {
      return 0;
    }
    tVar1 = ptVar4[1];
    bVar6 = (byte)tVar1 < (byte)ptVar5[1];
    if (tVar1 != ptVar5[1]) break;
    ptVar4 = ptVar4 + 2;
    ptVar5 = ptVar5 + 2;
    if (tVar1 == (type_info)0x0) {
      return 0;
    }
  }
  uVar2 = (uint)(bVar6 != 0);
  uVar3 = 1 - bVar6;
  return (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2));
}


