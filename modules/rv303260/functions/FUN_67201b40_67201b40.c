/* Module: rv303260.dll
   Function: FUN_67201b40
   Address: 67201b40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_67201b40(double param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double *pdVar5;
  char cVar6;
  char cVar7;
  double local_c;
  
  local_c = 999.0;
  cVar6 = '\x02';
  pdVar5 = (double *)&DAT_67214330;
  cVar7 = param_1._7_1_;
  do {
    dVar4 = *pdVar5 - param_1;
    if (dVar4 < _DAT_67213120) {
      dVar4 = -dVar4;
    }
    bVar1 = NAN(local_c);
    bVar2 = dVar4 < local_c;
    bVar3 = dVar4 == local_c;
    if (bVar2) {
      cVar7 = cVar6;
      local_c = dVar4;
    }
    pdVar5 = pdVar5 + 1;
    cVar6 = cVar6 + '\x01';
  } while ((int)pdVar5 < 0x67214420);
  return CONCAT11(bVar2 | (byte)((ushort)((ushort)(NAN(dVar4) || bVar1) << 10) >> 8) |
                  (byte)((ushort)((ushort)bVar3 << 0xe) >> 8),cVar7);
}


