/* Module: vidpcore.dll
   Function: FUN_5de824f0
   Address: 5de824f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5de824f0(double param_1,double param_2,int param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1 * param_1;
  bVar1 = true;
  local_28 = param_2 * param_2;
  iVar4 = 0;
  dVar2 = param_1;
  do {
    iVar5 = iVar4;
    dVar3 = (local_18 - local_28) + param_1;
    local_20 = dVar2 * local_20 + dVar2 * local_20 + param_2;
    local_28 = local_20 * local_20;
    local_18 = dVar3 * dVar3;
    if ((_DAT_5df291f0 < local_28 + local_18) || (param_3 <= iVar5)) {
      bVar1 = false;
    }
    iVar4 = iVar5 + 1;
    dVar2 = dVar3;
  } while (bVar1);
  return iVar5;
}


