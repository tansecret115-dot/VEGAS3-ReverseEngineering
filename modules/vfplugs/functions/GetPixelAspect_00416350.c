/* Module: vfplugs.dll
   Function: GetPixelAspect
   Address: 00416350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: double __thiscall CSfSurface::GetPixelAspect(void) */

double __thiscall CSfSurface::GetPixelAspect(CSfSurface *this)

{
                    /* 0x16350  7  ?GetPixelAspect@CSfSurface@@QAENXZ */
  return *(double *)(this + 0x440);
}


