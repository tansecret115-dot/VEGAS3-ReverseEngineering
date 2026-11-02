/* Module: pngu3266.dll
   Function: PointOnLink
   Address: 60618a37
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall XPNTextWithLink::PointOnLink(class CPNxPoint const &,unsigned long *)
    */

int __thiscall XPNTextWithLink::PointOnLink(XPNTextWithLink *this,CPNxPoint *param_1,ulong *param_2)

{
  ulong *puVar1;
  int *piVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  
                    /* 0x28a37  1717  ?PointOnLink@XPNTextWithLink@@IAEHABVCPNxPoint@@PAK@Z */
  puVar3 = param_2;
  if (param_2 != (ulong *)0x0) {
    puVar1 = *(ulong **)(*(int *)(this + 0x168) + 4);
    *param_2 = 0;
    param_2 = puVar1;
    while (param_2 != (ulong *)0x0) {
      puVar4 = (undefined4 *)FUN_6061a2c0((int *)&param_2);
      piVar2 = (int *)*puVar4;
      if ((((*piVar2 <= *(int *)param_1) && (*(int *)param_1 <= piVar2[2])) &&
          (piVar2[1] <= *(int *)(param_1 + 4))) && (*(int *)(param_1 + 4) <= piVar2[3])) {
        return 1;
      }
      *puVar3 = *puVar3 + 1;
    }
  }
  return 0;
}


