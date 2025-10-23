def detect_outliers(data, threshold=3):
"""
Args:
data: List of numerical values.
threshold: Z-score cutoff (default: 3).
Returns:
List of indices of outliers.
"""
import numpy as np
z_scores = np.abs((data - np.mean(data)) / np.std(data))
return np.where(z_scores > threshold)[0].tolist()