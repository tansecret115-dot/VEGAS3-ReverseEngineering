/* Module: pngu3266.dll
   Function: DrawOrthogonalBreakLine
   Address: 60609565
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNDrawHelper::DrawOrthogonalBreakLine(class CPNDC
   *,long,long,unsigned long,long) */

void __cdecl
CPNDrawHelper::DrawOrthogonalBreakLine
          (CPNDC *param_1,long param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_c;
  
                    /* 0x19565  1002  ?DrawOrthogonalBreakLine@CPNDrawHelper@@SAXPAVCPNDC@@JJKJ@Z */
  bVar6 = param_4 != 1;
  param_4 = 1;
  iVar3 = 0;
  iVar4 = param_2;
  iVar5 = param_3;
  do {
    lVar1 = param_3;
    iVar2 = iVar5;
    if (bVar6) {
      lVar1 = param_2;
      iVar2 = iVar4;
    }
    if (param_5 + lVar1 <= iVar2) {
      return;
    }
    if (bVar6) {
      iVar5 = iVar3 + param_3;
      iVar3 = iVar3 + param_3;
      iVar4 = iVar4 + 3;
      local_c = iVar4;
LAB_606095fa:
      iVar2 = iVar3;
      if (param_2 + param_5 < iVar4) {
        iVar4 = param_2 + param_5;
      }
    }
    else {
      local_c = param_2 + iVar3;
      iVar4 = param_2 + iVar3;
      iVar2 = param_5 + param_3;
      iVar3 = iVar5 + 3;
      if (iVar5 + 3 <= iVar2) goto LAB_606095fa;
    }
    (**(code **)(*(int *)param_1 + 0x10))(local_c,iVar5,iVar4,iVar2);
    param_4 = param_4 + 1;
    iVar5 = iVar2;
    if ((int)param_4 % 4 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = ((int)param_4 % 2 != 0) - 1;
    }
  } while( true );
}


