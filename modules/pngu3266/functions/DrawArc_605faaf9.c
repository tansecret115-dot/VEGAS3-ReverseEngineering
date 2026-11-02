/* Module: pngu3266.dll
   Function: DrawArc
   Address: 605faaf9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawArc(long,long,long,long,long,long) */

void __thiscall
CPNDC::DrawArc(CPNDC *this,long param_1,long param_2,long param_3,long param_4,long param_5,
              long param_6)

{
  int iVar1;
  undefined4 uVar2;
  int x2;
  int y2;
  int iVar3;
  
                    /* 0xaaf9  977  ?DrawArc@CPNDC@@UAEXJJJJJJ@Z */
  iVar1 = param_6 - param_2;
  iVar3 = param_5 - param_1;
  sqrt((double)iVar1 * (double)iVar1 + (double)iVar3 * (double)iVar3);
  if ((param_1 == param_3) && (param_3 == param_4)) {
    uVar2 = ftol();
    (**(code **)(*(int *)this + 0x2c))(param_5,param_6,uVar2,uVar2);
  }
  else {
    sqrt((double)(iVar3 * iVar3 + iVar1 * iVar1));
    MoveToEx(*(HDC *)(this + 0x1cf),param_1,param_2,(LPPOINT)0x0);
    iVar1 = ftol();
    iVar3 = ftol();
    x2 = ftol();
    y2 = ftol();
    if ((*(int *)(this + 0xc) == 0) || (*(int *)(*(int *)(this + 0xc) + 0xc) == 8)) {
      Arc(*(HDC *)(this + 0x1cf),iVar1,iVar3,x2,y2,param_1,param_2,param_3,param_4);
    }
    else {
      Pie(*(HDC *)(this + 0x1cf),iVar1,iVar3,x2,y2,param_1,param_2,param_3,param_4);
    }
  }
  return;
}


