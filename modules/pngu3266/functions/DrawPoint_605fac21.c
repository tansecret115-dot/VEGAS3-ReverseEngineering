/* Module: pngu3266.dll
   Function: DrawPoint
   Address: 605fac21
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawPoint(struct _PNxPoint &) */

void __thiscall CPNDC::DrawPoint(CPNDC *this,_PNxPoint *param_1)

{
  int iVar1;
  
                    /* 0xac21  1003  ?DrawPoint@CPNDC@@UAEXAAU_PNxPoint@@@Z */
  iVar1 = (**(code **)(**(int **)(this + 8) + 0x2c))();
  ::SetPixel(*(HDC *)(this + 0x1cf),*(int *)param_1,*(int *)(param_1 + 4),*(COLORREF *)(iVar1 + 8));
  return;
}


