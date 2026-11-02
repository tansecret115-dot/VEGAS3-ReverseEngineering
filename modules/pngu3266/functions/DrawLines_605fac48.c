/* Module: pngu3266.dll
   Function: DrawLines
   Address: 605fac48
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawLines(long,struct _PNxPoint * const,long,long) */

void __thiscall
CPNDC::DrawLines(CPNDC *this,long param_1,_PNxPoint *param_2,long param_3,long param_4)

{
  int iVar1;
  long cpt;
  POINT *apt;
  LONG *pLVar2;
  int iVar3;
  
                    /* 0xac48  1000  ?DrawLines@CPNDC@@UAEXJQAU_PNxPoint@@JJ@Z */
  cpt = param_1;
  apt = operator_new(param_1 << 3);
  if (0 < param_1) {
    pLVar2 = &apt->y;
    iVar3 = (int)param_2 - (int)apt;
    do {
      iVar1 = *(int *)param_2;
      param_2 = param_2 + 8;
      ((POINT *)(pLVar2 + -1))->x = param_3 + iVar1;
      *pLVar2 = *(int *)(iVar3 + (int)pLVar2) + param_4;
      pLVar2 = pLVar2 + 2;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  Polyline(*(HDC *)(this + 0x1cf),apt,cpt);
  operator_delete(apt);
  return;
}


