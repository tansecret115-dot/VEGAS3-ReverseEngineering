/* Module: pngu3266.dll
   Function: UpdateBackgroundColor
   Address: 6061533a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNImageControl::UpdateBackgroundColor(void) */

void __thiscall CPNImageControl::UpdateBackgroundColor(CPNImageControl *this)

{
  int *piVar1;
  
                    /* 0x2533a  2106  ?UpdateBackgroundColor@CPNImageControl@@QAEXXZ */
  if (((*(int *)(this + 0x102) != 0) && (piVar1 = *(int **)(this + 0xc0), piVar1 != (int *)0x0)) &&
     ((short)piVar1[10] == 0)) {
    (**(code **)(*piVar1 + 0x34))(0,0,this + 0xc4);
  }
  return;
}


