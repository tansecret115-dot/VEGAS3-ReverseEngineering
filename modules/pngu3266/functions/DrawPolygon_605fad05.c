/* Module: pngu3266.dll
   Function: DrawPolygon
   Address: 605fad05
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawPolygon(long,struct _PNxPoint * const,long,long,long)
    */

void __thiscall
CPNDC::DrawPolygon(CPNDC *this,long param_1,_PNxPoint *param_2,long param_3,long param_4,
                  long param_5)

{
  int iVar1;
  POINT *apt;
  LONG *pLVar2;
  _PNxPoint *p_Var3;
  int iVar4;
  
                    /* 0xad05  1006  ?DrawPolygon@CPNDC@@UAEXJQAU_PNxPoint@@JJJ@Z */
  p_Var3 = param_2;
  apt = operator_new(param_1 << 3);
  if (0 < param_1) {
    pLVar2 = &apt->y;
    iVar4 = (int)param_2 - (int)apt;
    param_2 = (_PNxPoint *)param_1;
    do {
      iVar1 = *(int *)p_Var3;
      p_Var3 = p_Var3 + 8;
      ((POINT *)(pLVar2 + -1))->x = param_3 + iVar1;
      *pLVar2 = *(int *)(iVar4 + (int)pLVar2) + param_4;
      pLVar2 = pLVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != (_PNxPoint *)0x0);
  }
  Polygon(*(HDC *)(this + 0x1cf),apt,param_1);
  iVar4 = SetPolyFillMode(*(HDC *)(this + 0x1cf),(param_5 != 1) + 1);
  SetPolyFillMode(*(HDC *)(this + 0x1cf),iVar4);
  operator_delete(apt);
  return;
}


